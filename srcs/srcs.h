/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:04:35 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/04 17:54:46 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "../libft/libft.h"

void	input_free(char	*argv[]);
char	**input_seperator(char *argv[]);
int		input_checker(char *argv[]);

typedef struct s_stack_node
{
	int				data;
	struct s_stack	*nxt_ptr;
	struct s_stack	*prv_ptr;
}	t_stack_node;

#endif