/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>i  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:55:52 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/13 12:34:28 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//---INCLUDES---------------------------------------------------------------{{{{{{}}}

#include "libft.h"
#include <stdio.h>
#include <string.h>

//--------------------------------------------------------------------------}}}

void	uf_striteri_callback(unsigned int i, char *s)
{
	printf("%c -> ", *s);
	*s = *s + i;
	printf("%c\n", *s);
}

void	uf_striter_callback(char *s)
{
	printf("%c -> ", *s);
	*s = *s + 1;
	printf("%c\n", *s);
}

int	uf_test_striteri(void)
{
	char *str = ft_strdup("Hello");
	char *str2 = ft_strdup("Hfnos");

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	printf("NULL, NULL\n");
	ft_striteri(NULL, NULL);
	printf("str, NULL\n");
	ft_striteri(str, NULL);
	printf("str, callback\n");
	ft_striteri(str, uf_striteri_callback);
	
	if (strcmp(str, str2) != 0)
	{
		printf("Error Line");
		free(str);
		free(str2);
		return (0);
	}
	free(str);
	free(str2);
	return (1);
}

int	uf_test_striter(void)
{
	char *str = ft_strdup("Hello");
	char *str2 = ft_strdup("Ifmmp");

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	printf("NULL, NULL\n");
	ft_striter(NULL, NULL);
	printf("str, NULL\n");
	ft_striter(str, NULL);
	printf("str, callback\n");
	ft_striter(str, uf_striter_callback);
	
	if (strcmp(str, str2) != 0)
	{
		printf("Error Line");
		free(str);
		free(str2);
		return (0);
	}
	free(str);
	free(str2);
	return (1);
}

int main(void)
{
	printf("testing iteri: %d\n", uf_test_striteri());
	printf("testing iter: %d\n", uf_test_striter());
	return (0);
}
