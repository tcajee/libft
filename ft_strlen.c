/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:06:25 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/27 14:19:26 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t			len;
	unsigned char	*s_h;

	len = 0;
	s_h = (unsigned char *)s;
	while (*(s_h + len))
		len++;
	return (len);
}
