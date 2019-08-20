/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:35:24 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 10:07:01 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*cp;

	cp = (unsigned char *)dst;
	___(n--, cp[n] = (unsigned char)c);
	return (dst);
}
