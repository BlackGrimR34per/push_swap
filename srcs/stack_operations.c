/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:18:34 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/04 20:09:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	stack_init(t_stack_node **stack, char *argv[])
{
	int		row;
	long	nbr;

	row = 0;
	while (argv[row])
	{
		nbr = ft_atol(argv[row]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			input_free(argv);
		if (repeat(*stack, (int)nbr))
			input_free(argv);

	}
}

void	add_to_stack(t_stack_node **ptr, int nbr)
{
	
}

int	repeat(t_stack_node *ptr, int nbr)
{
	if (ptr == NULL)
		return (0);
	while (ptr)
	{
		if (ptr->data == nbr)
			return (1);
		ptr=ptr->nxt_ptr;
	}
	return (0);
}