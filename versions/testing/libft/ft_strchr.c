/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:57:56 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 10:05:52 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s && *((unsigned char *)s) != (unsigned char)c)
			s++;
	}
	if (*((unsigned char *)s) == (unsigned char)c)
		return (char *)s;
	return (NULL);
}
