/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:07:35 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/03 20:58:59 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"
#include <stdio.h>

char	**inpsep(char *argv[])
{
	char	*str;
	char	*temp;
	int		index;
	char	**split_args;

	str = ft_strdup("");
	index = 0;
	while (argv[++index])
	{
		temp = str;
		str = ft_strjoin(str, argv[index]);
		free(temp);
		temp = str;
		str = ft_strjoin(str, " ");
		free(temp);
	}
	split_args = ft_split(str, ' ');
	free(str);
	return (split_args);
}

int	inp_checker(char *argv[])
{
	int	row;
	int	column;

	row = -1;
	while (argv[++row])
	{
		column = -1;
		while (argv[row][++column])
		{
			if (!(ft_isdigit(argv[row][column]) ||
				argv[row][column] == 43 || argv[row][column] == 45))
				return (1);
		}
	}
	return (0);
}
