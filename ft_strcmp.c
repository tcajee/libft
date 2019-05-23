/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:27:32 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/23 10:34:43 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int			i;
	const char	*str1;
	const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	if ((str1[i] && str2[i]) && (str1[i] != str2[i]))
		return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
	while ((str1[i] && str2[i]) && str1[i] == str2[i])
		i++;
	return (((unsigned char)(str1[i])) - ((unsigned char)(str2[i])));
}
