/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:35:24 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/16 11:41:34 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*cp;

	F_(!dst, dst);
	cp = (unsigned char *)dst;
	___(n--, *cp++ = (unsigned char)c);
	return (dst);
}
