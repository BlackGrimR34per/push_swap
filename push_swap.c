/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:47:36 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/03 00:41:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		index;
	char	*str;

	index = 0;
	str = "";
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
	{
		while (argv[++index])
		{
			str = ft_strjoin(str, argv[index]);
			str = ft_strjoin(str, " ");
		}
		argv = ft_split(str, ' ');
		index = -1;
		while (argv[++index])
			printf("%d\n",ft_atoi(argv[index]));
	}
}
