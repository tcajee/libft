/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:01:34 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 10:07:02 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	offset;
	size_t	len;

	offset = ft_strlen(s1);
	len = ft_strlen(s2) + 1;
	F_(len - 1 < n, ft_memcpy(s1 + offset, s2, len) - offset);
	_(s1 = ft_strncpy(s1 + offset, s2, n) - offset);
	s1[offset + n] = '\0';
	return (s1);
}
