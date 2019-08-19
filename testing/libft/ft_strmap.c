/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:19:54 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 10:59:01 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*cursor;
	char	*new;
	size_t	len;

	new = NULL;
	if (s && f)
	{
		len = ft_strlen(s) + 1;
		F_(!(new = (char *)malloc(sizeof(char) * len)), NULL);
		new[len] = '\0';
		cursor = new;
		___(*s, *cursor++ = f(*s++));
	}
	return (new);
}
