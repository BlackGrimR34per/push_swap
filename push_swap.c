/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:47:36 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/05 14:28:49 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


int	stack_sorted(t_stack_node **stack)
{
	while ((*stack)->nxt_ptr != NULL)
	{
		if ((*stack)->data > (*stack)->nxt_ptr->data)
			return (1);
		*stack = (*stack)->nxt_ptr;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack_node	*node_a;
	t_stack_node	*node_b;

	node_a = NULL;
	node_b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	argv = input_seperator(argv);
	if (input_checker(argv))
	{
		input_free(argv);
		return (1);
	}
	stack_init(&node_a, argv);
	if (!stack_sorted(node_a))
	{
		// Sort a by swapping the top two elements
		// if (ft_lstsize(node_a)  = 2)
		// Sort by set rules
		// if (ft_lstsize(node_a) == 3)
		// Else quick sort

	}
}
