/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:47:36 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/04 17:49:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_stack_node	*node_a;
	t_stack_node	*node_b;

	node_a = NULL;
	node_b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	argv = inpsep(argv);
	if (inp_checker(argv))
		input_free(argv);
	stack_init(&node_a, argv);
}
