/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:04:35 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/03 20:13:47 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include "../libft/libft.h"

char	**inpsep(char *argv[]);
int		inp_checker(char *argv[]);

typedef struct s_stack_node
{
	int				data;
	struct s_stack	*nxt_ptr;
	struct s_stack	*prv_ptr;
}	t_stack_node;

#endif