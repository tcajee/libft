/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:17:53 by tcajee            #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2019/06/12 16:06:17 by tcajee           ###   ########.fr       */
=======
/*   Updated: 2019/06/08 20:24:38 by tcajee           ###   ########.fr       */
>>>>>>> 4e47b7cd977dcdacf10f1daed72badb23014c5be
=======
/*   Updated: 2019/06/08 20:24:38 by tcajee           ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
