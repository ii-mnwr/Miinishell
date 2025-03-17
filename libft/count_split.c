/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamad <hamad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:11:28 by hamad             #+#    #+#             */
/*   Updated: 2025/01/13 16:16:05 by hamad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_split(char **argv)
{
	size_t	count;

	if (!argv || !argv[0])
		return (0);
	count = 0;
	while (argv[count])
		count++;
	return (count);
}
