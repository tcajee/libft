/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:23:45 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 15:49:07 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_h;

	i = -1;
	src_h = (unsigned char *)s;
	___(++i < n, F_(src_h[i] == (unsigned char)c, (void *)&s[i]));
	return (NULL);
}
