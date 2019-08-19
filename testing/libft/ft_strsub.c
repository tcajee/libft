/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:53:05 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 11:00:41 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t n)
{
	char	*new;
	size_t	i;

	new = NULL;
	if (s)
	{
		i = -1;
		F_(!(new = (char *)malloc(sizeof(char) * n + 1)), NULL);
		new[n + 1] = '\0';
		___(++i < n && s[i], new[i] = s[start + i]);
	}
	return (new);
}
