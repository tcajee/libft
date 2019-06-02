/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:03:32 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/30 16:41:00 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*start;
	const char	*end;
	char		*new;
	size_t		len;

	new = NULL;
	len = 0;
	if (s)
	{
		end = (s + (ft_strlen(s)));
		while (ft_iswhitespace(*s) == 1 && *s)
			s++;
		start = s;
		while (ft_iswhitespace(*(end - 1)) == 1 && end != s)
			end--;
		while (s++ != end)
			len++;
		new = ft_strnew(len);
		if (!new)
			return (NULL);
		ft_memcpy(new, start, len);
		return (new);
	}
	return (new);
}
