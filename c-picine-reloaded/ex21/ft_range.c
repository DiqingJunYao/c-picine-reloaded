/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:36:02 by dyao              #+#    #+#             */
/*   Updated: 2024/06/05 16:31:02 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	*ft_range(int min, int max)
{
	int		*store;
	long	a;
	long	b;
	long	c;

	if (min >= max)
	{
		store = NULL;
		return (store);
	}
	a = max - min;
	store = malloc((a + 1) * sizeof(int));
	if (!(store))
		return (NULL);
	b = 0;
	c = min;
	while (a > 0)
	{
		store[b] = c;
		a--;
		b++;
		c++;
	}
	store[b] = '\0';
	return (store);
}
