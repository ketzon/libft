/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson@student.42.fr <marvin@42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:08:22 by fbesson@stude     #+#    #+#             */
/*   Updated: 2022/11/22 19:37:01 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t n)
{
	size_t			i;
	unsigned char	*dest2;

	i = 0;
	dest2 = (unsigned char *)dest;
	if (!dest || n <= 0)
		return (NULL);
	while (i < n)
	{
		dest2[i] = value;
		i++;
	}
	return (dest2);
}
