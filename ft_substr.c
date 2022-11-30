/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson@student.42.fr <marvin@42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:46:42 by fbesson@stude     #+#    #+#             */
/*   Updated: 2022/11/30 16:52:40 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t n)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *)malloc(sizeof(*str) * (n + 1));
	if (!str)
		return (NULL);
	while (str[i] && i < n)
	{
		substr[i] = str[i + start];
		i++;
	}	
	substr[i] = '\0';
	return (substr);
}
