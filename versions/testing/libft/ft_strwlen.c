/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:37:13 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 10:05:53 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strwlen(const char *s, int c)
{
	size_t len;

	len = 0;
	if (s)
	{
		while (*s && *s++ != c)
			len++;
	}
	return (len);
}
