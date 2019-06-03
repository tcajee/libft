/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:09:55 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/03 17:19:36 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char temp;
	char *end;
	char *start;

	start = s;
	end = s;
	if (!s)
		return (NULL);
	while (*s)
		end++;
	s = start;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end-- = *start++;
	}
	return (s);
}
