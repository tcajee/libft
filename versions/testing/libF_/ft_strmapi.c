/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:55:21 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/20 10:07:02 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cursor;
	char	*new;
	size_t	len;
	size_t	i;

	new = NULL;
	if (s && f)
	{
		i = 0;
		len = ft_strlen(s) + 1;
		F_(!(new = (char *)malloc(sizeof(char) * len)), NULL);
		cursor = new;
		___(*s, *cursor++ = f(i++, *s++));
		*cursor = '\0';
	}
	return (new);
}
