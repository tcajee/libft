/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:28:10 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/05 16:43:53 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{

    /goinfre/tcajee/Desktop/libft
    TODO 
	FIXME
    XXX
    char *head;
	char *string;
	int x;

	if (n < 0)
		x = (n * -1);
	else
		x = n;
	head = ft_strnew(12);
	if (!head)
		return (NULL);
	string = head;
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

