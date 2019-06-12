/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:28:27 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/12 18:53:07 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int output = ft_strcmp("zba","abc");
	printf("%d\n", output);
	output = strcmp("zba","abc");
	printf("%d\n", output);
	return (0);
}
