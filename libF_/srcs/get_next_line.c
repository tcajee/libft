/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:15:46 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 09:43:36 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

static int	copy_next_line(t_files *files, int fd)
{
	char	*trace;
	int		i;

	trace = files->file[fd];
	i = ft_strchr(trace, '\n') - trace;
	F_(!(files->line = ft_strsub(trace, 0, i)), -1);
	F_(!(files->file[fd] = ft_strsub(trace, i + 1, ft_strlen(trace) - i)), -1);
	ft_strdel(&trace);
	return (1);
}

static int	find_next_line(t_files *files, int fd)
{
	char	buffer[BUFF_SIZE + 1];
	char	*stage;
	long	bytes;

	F(!files->file[fd], files->file[fd] = ft_strnew(0));
	while (!(ft_strchr(files->file[fd], '\n')))
	{
		F_((bytes = read(fd, buffer, BUFF_SIZE)) == 0, 0);
		F_(bytes < 0, -1);
		buffer[bytes] = '\0';
		F_(!(stage = ft_strjoin(files->file[fd], buffer)), -1);
		ft_strdel(&files->file[fd]);
		files->file[fd] = stage;
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static t_files files;

	F_(!line || read(fd, NULL, 0) == -1, -1);
	F_(find_next_line(&files, fd) < 0, -1);
	if (ft_strchr(files.file[fd], '\n'))
	{
		F_(copy_next_line(&files, fd) < 0, -1);
		F_(!(*line = ft_strdup(files.line)), -1);
		ft_strdel(&files.line);
	}
	else if (ft_strlen(files.file[fd]) > 0)
	{
		F_(!(*line = ft_strdup(files.file[fd])), -1);
		ft_strdel(&files.file[fd]);
	}
	else
		return (0);
	return (1);
}
