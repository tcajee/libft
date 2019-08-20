/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:54:04 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 14:49:43 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_h;
	char	*src_h;

	dst_h = (char *)dst;
	src_h = (char *)src;
	F_(!dst && !src && n > 0, NULL);
	___(n--, dst_h[n] = src_h[n]);
	return (dst);
}