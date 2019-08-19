/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:33:30 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 10:48:47 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	len;

	if (src)
	{
		len = ft_strlen(src);
		F_(len < n, ft_memcpy(ft_memset(dst, '\0', n), src, len));
	}
	return (ft_memcpy(dst, src, n));
}
