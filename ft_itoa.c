/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:28:10 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/03 17:21:59 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *head;
	char *string;
	int x;

	if (n < 0)
		x = (n * -1);
	else
		x = n;
	string = ft_strnew(12);
	if (!string)
		return (NULL);
	head = string;
	while (x > 0)
	{
		*string++ = (x % 10) + 48;
		x /= 10;
	}
	if (n < 0)
		*string = '-';
	head = ft_strrev(head);
	return (head);
}

