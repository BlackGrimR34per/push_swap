/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:18:34 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/05 14:10:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"
#include <stdio.h>

void	stack_init(t_stack_node **stack, char *argv[])
{
	int		row;
	long	nbr;
	t_stack_node *temp;

	row = -1;
	while (argv[++row])
	{
		nbr = ft_atol(argv[row]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			input_free(argv);
		if (repeat(*stack, (int)nbr))
			input_free(argv);
		free(argv[row]);
		add_to_stack(stack, nbr);
	}
	free(argv);
	// free(stack);
}

void	add_to_stack(t_stack_node **ptr, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*lst_ptr;

	node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->data = nbr;
	node->nxt_ptr = NULL;
	if (!*ptr)
	{
		*ptr = node;
		node->prv_ptr = NULL;
	}
	else
	{
		lst_ptr = ft_lstlast(*ptr);
		node->prv_ptr = lst_ptr;
		lst_ptr->nxt_ptr = node;
	}
}

int	repeat(t_stack_node *ptr, int nbr)
{
	if (ptr == NULL)
		return (0);
	while (ptr)
	{
		if (ptr->data == nbr)
			return (1);
		ptr = ptr->nxt_ptr;
	}
	return (0);
}
