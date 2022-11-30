/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson@student.42.fr <marvin@42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:06:19 by fbesson@stude     #+#    #+#             */
/*   Updated: 2022/11/22 22:34:35 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelements, size_t bytes)
{
	void	*mem;
	size_t	n;

	n = bytes * nelements;
	mem = malloc(n);
	if (!mem)
		return (0);
	ft_bzero(mem, n);
	return (mem);
}
