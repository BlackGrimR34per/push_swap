/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:04:35 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/05 11:23:16 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "../libft/libft.h"

typedef struct s_stack_node
{
	int					data;
	struct s_stack_node	*nxt_ptr;
	struct s_stack_node	*prv_ptr;
}	t_stack_node;

void			input_free(char	*argv[]);
char			**input_seperator(char *argv[]);
t_stack_node	*ft_lstlast(t_stack_node *lst);
int				input_checker(char *argv[]);
void			stack_init(t_stack_node **stack, char *argv[]);
void			add_to_stack(t_stack_node **ptr, int nbr);
int				repeat(t_stack_node *ptr, int nbr);


#endif