/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:01:34 by tcajee            #+#    #+#             */
/*   Updated: 2019/07/15 15:05:19 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	offset;
	size_t	len;

	FT_(!s2, NULL);
	if (s1)
	{
		offset = ft_strlen(s1);
		len = ft_strlen(s2) + 1;
		if ((len - 1) < n)
			return (ft_memcpy(s1 + offset, s2, len) - offset);
		else
		{
			s1 = ft_memcpy(s1 + offset, s2, n) - offset;
			s1[offset + n] = '\0';
		}
	}
	return (s1);
}
