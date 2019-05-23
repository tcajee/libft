/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:35:23 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/23 11:10:33 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	if ((str1[i] && str2[i]) && (str1[i] != str2[i]))
		return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
	while ((str1[i] && str2[i]) && str1[i] == str2[i] && i < n)
		i++;
	return (((unsigned char)(str1[i])) - ((unsigned char)(str2[i])));
}
