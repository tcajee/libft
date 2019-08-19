/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:31:04 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 15:11:40 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*src_h;

	i = -1;
	src_h = (char *)src;
	___(src_h[++i], dst[i] = src_h[i]);
	dst[i] = '\0';
	return (dst);
}
