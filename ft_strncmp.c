/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:23 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/27 17:45:15 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && n != 0)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		else if (*(s1 + i) && (*(s1 + i) == *(s2 + i)))
			i++;
		else
			return (0);
	}
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}

//	else if ((*(s1 + i) || *(s2 + i)) && (*(s1 + i) == *(s2 + i)))
