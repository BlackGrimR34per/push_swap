/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:47:36 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/02 20:02:20 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	index;
	if (argc <= 1 || (!argv[1][0] && argc == 2))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	index = 0;
	while (argv[index])
		printf("%s", argv[index++]);
	return (0);
}
