/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:23:45 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 10:48:46 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s)
	{
		i = -1;
		___(++i < n,
		F_(*((unsigned char *)s + i) == (unsigned char)c, (void *)s + i));
	}
	return (NULL);
}
