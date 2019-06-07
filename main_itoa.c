/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_temp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:13:07 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/07 14:30:59 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//---INCLUDES---------------------------------------------------------------{{{

#include "libft.h"
#include <stdio.h>

//--------------------------------------------------------------------------}}}

//---FUNCTION---------------------------------------------------------------{{{

char	*ft_itoa(int n)

{
	char    *head;
	char    *string;
	int     x;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0 && n != -2147483648)
		x = n * -1;
	else if (n == 0) return (ft_strdup("0"));
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
	if (n < 0 && n != -2147483648)
		*string = '-';
	head = ft_strrev(head);
	string = head;
	head = ft_strcpy(ft_strnew(ft_strlen(string)), string); return (head);
}

/* { */
/* char *head; */
	/* char *string; */
	/* int x; */
	/* string = ft_strnew(13); */
	/* if (!string) */
	/* 	return (NULL); */
    /* if (n < 0) */
        /* x = n * -1; */
    /* else */
        /* x = n; */
    /* if (x == 0) */
        /* *string = 0 + 48; */
	/* head = string; */
	/* while (x > 0) */
	/* { */
	/* 	if (x > 0) */
        /* { */
            /* *string++ = (x % 10) + 48; */
            /* x /= 10; */
        /* } */
        /* else */
            /* *string++ = 0 + 48; */
	/* } */
    /* if (n < 0) */
        /* *string = '-'; */
	/* head = ft_strrev(head); */
    /* string = head; */
    /* head = ft_strnew(ft_strlen(string)); */
    /* head = ft_strcpy(head, string); */
	/* return (head); */
/* } */

//--------------------------------------------------------------------------}}}

//---TESTER-----------------------------------------------------------------{{{

int	ft_tester(char **inputs)
{
	int RETURN = 42;

	int i = 1;
printf("Checking arguments:\n");
	while (i != 2)
	{
		printf("argv[%d]: %s\n", i, inputs[i]);
		i++;
	}
printf("//--------------------------------------------------------------------------\n");
	int n = -2147483648;
	char *string = ft_itoa(n);
	printf("string: %s\n", string);
	printf("strlen: %zu\n", ft_strlen(string));
printf("//--------------------------------------------------------------------------\n");
	return (RETURN);
}
//--------------------------------------------------------------------------}}}

//---RETURN-----------------------------------------------------------------{{{

int	ft_return(int RETURN)
{
printf("Program exited with code: %d\n", RETURN);

printf("//--------------------------------------------------------------------------\n");
	return (RETURN);
}
//--------------------------------------------------------------------------}}}

//---ARGS-------------------------------------------------------------------{{{

int	ft_args(int ac, char **av)
{
	int i = 1;
printf("Checking arguments:\n");
	while (i != ac)
	{
		printf("argv[%d]: %s\n", i, av[i]);
		i++;
	}
	i = 42;

printf("//--------------------------------------------------------------------------\n");
	return (i);
}
//--------------------------------------------------------------------------}}}

//---MAIN-------------------------------------------------------------------{{{

int	main(int argc, char **argv)
{
	int RETURN = 42;

printf("//--------------------------------------------------------------------------\n");
printf("Initialising: %s\n", argv[0]);
printf("//--------------------------------------------------------------------------\n");
	if (argc > 0)
	{
		RETURN = ft_args(argc, argv);
		RETURN = ft_tester(argv);
	}
	else
	{
		printf("Program %s has no arguments...\n", argv[0]);

printf("//--------------------------------------------------------------------------\n");
	}
	return (ft_return(RETURN));
}

//--------------------------------------------------------------------------}}}

