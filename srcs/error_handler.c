/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:00:53 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/04 19:36:49 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	input_free(char	*argv[])
{
	int	row;

	row = -1;
	while (argv[++row])
		free(argv[row]);
	free(argv);
}

