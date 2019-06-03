/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_temp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:13:07 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/03 11:13:05 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//---INCLUDES---------------------------------------------------------------{{{

#include "libft.h"
#include <stdio.h>

//--------------------------------------------------------------------------}}}

//---FUNCTION---------------------------------------------------------------{{{

char	**ft_strsplit(char const *s, char c)
{
	char		**array;
	const char	*start;
	char		*new;

printf("Breakpoint 1\n");
	array = NULL;
	new = NULL;
	if (!s)
		return (NULL);


printf("Breakpoint 2\n");
	new = ft_strnew(ft_strwcount(s, c));
	*array = new;

printf("Breakpoint 3\n");
	if (!array)
		return (NULL);

	while (*s)
	{
printf("Breakpoint 4\n");
		start = ft_strwnext(s, c);
		new = ft_strsub(start, 0, ft_strwlen(start, c));
		if (!new)
			return (NULL);
		*array++ = new;
		s = (start + ft_strwlen(start, c));
	}
	return (array);
}

//--------------------------------------------------------------------------}}}

//---TESTER-----------------------------------------------------------------{{{

int	ft_tester(char **inputs)
{
	int RETURN = 42;

// Custom tests:
	int i = 0;
	const char *input = inputs[1];
	char delimiter = inputs[2][0];
	char **output;
printf("Testing function...\n");
printf("Input: %s\n", input);
printf("Delimiter: %c\n", delimiter);
	output = ft_strsplit(input, delimiter);
	while (output[i])
		printf("Output: %s\n", output[i++]);
printf("//--------------------------------------------------------------------------");
	return (RETURN);
}
//--------------------------------------------------------------------------}}}

//---RETURN-----------------------------------------------------------------{{{

int	ft_return(int RETURN)
{
printf("Program exited with code: %d\n", RETURN);
printf("//--------------------------------------------------------------------------");
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
printf("//--------------------------------------------------------------------------");
	return (i);
}
//--------------------------------------------------------------------------}}}

//---MAIN-------------------------------------------------------------------{{{

int	main(int argc, char **argv)
{
	int RETURN = 42;

printf("//--------------------------------------------------------------------------");
printf("Initialising: %s\n", argv[0]);
printf("//--------------------------------------------------------------------------");
	if (argc > 0)
	{
		RETURN = ft_args(argc, argv);
		RETURN = ft_tester(argv);
	}
	else
	{
		printf("Program %s has no arguments...\n", argv[0]);
		printf("//--------------------------------------------------------------------------");
	}
	return (ft_return(RETURN));
}

//--------------------------------------------------------------------------}}}

