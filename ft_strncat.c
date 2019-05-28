/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:01:34 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/28 09:15:00 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	char	*temp;

	temp = s1;
	s1 += ft_strlen(s1);
	if (ft_strlen(s2) > n)
		len = n;
	if (ft_strlen(s2) < n)
		len = ft_strlen(s2);
	s1[len] = '\0';
	memcpy(s1, s2, len);
	return (temp);
}
