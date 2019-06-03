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
	char		*neww;
	size_t len;

	array = NULL;
	neww = NULL;
	if (!s)
		return (NULL);

	len = ft_strwcount(s, c);
	printf("Set len: %zu\n", len);
	neww = ft_strnew(len);
	printf("Set new: %s\n", neww);
	array = (char **)neww;
	printf("Set array: %p\n", array);
	if (!array)
		return (NULL);
	printf("Entering while..\n");
	while (*s)
	{

		start = ft_strwnext(s, c);
		neww = ft_strsub(start, 0, ft_strwlen(start, c));
		if (!neww)
			return (NULL);
		*array++ = neww;
		printf("in while...\n");
		s = (start + ft_strwlen(start, c));
	}
	printf("Exiting function...\n");
	return (array);
}

//--------------------------------------------------------------------------}}}

//---TESTER-----------------------------------------------------------------{{{

int	ft_tester(char **inputs)
{
	int RETURN = 42;

// Custom tests:
//	int i = 0;
	char const *input = inputs[1];
	char delimiter = inputs[2][0];
	char **output = NULL;

printf("Testing function...\n");
printf("Input: %s\n", input);
printf("Delimiter: %c\n", delimiter);
	output = ft_strsplit(input, delimiter);
	if (!output)
		return (42);
	//while (*output)
	printf("Output: %s\n", output[0]);
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

