/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:47:36 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/03 20:59:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	argv = inpsep(argv);
	if (inp_checker(argv))
		return (1);
	int index = -1;
	while (argv[++index])
		printf("%d", ft_atoi(argv[index]));
}
