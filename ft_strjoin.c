/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:34:12 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/13 17:21:34 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	if (!s1 || !s2)
		return (NULL);
	new = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (!new)
		return (NULL);
	if (s1)
		new = ft_strcpy(new, s1);
	if (s2)
		new = ft_strcat(new, s2);
	return (new);
}
