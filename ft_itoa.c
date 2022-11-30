/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson@student.42.fr <marvin@42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:54:16 by fbesson@stude     #+#    #+#             */
/*   Updated: 2022/11/30 18:12:41 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*void_tab(int n)
{
	int		size;
	char	*tab;

	size = 0;
	if (n == 0)
		size = 2;
	tab = (char *)malloc(sizeof(char) * size);
	tab[0] = '0';
	tab[1] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*tab;
	int		len;

	nb = (long)n;
	len = digit_count(nb);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	if (nb == 0)
		return (void_tab(n));
	if (nb < 0)
		nb = -nb;
	if (n < 0)
		tab[0] = '-';
	tab[len] = '\0';
	len--;
	while (nb != 0)
	{
		tab[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (tab);
}
