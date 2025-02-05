/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:06:57 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/05 11:19:12 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

t_stack_node	*ft_lstlast(t_stack_node *lst)
{
	if (!lst)
		return (0);
	while (lst -> nxt_ptr != NULL)
		lst = lst -> nxt_ptr;
	return (lst);
}
