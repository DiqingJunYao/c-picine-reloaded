/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 21:31:59 by dyao              #+#    #+#             */
/*   Updated: 2024/06/05 10:40:18 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	*ft_range(int min, int max)
{
	int		count1;
	int		count2;
	long	a;
	char	*store;

	count1 = 1;
	while (min < -1)
	{
		min++;
		count1++;
	}
	count2 = 1;
	while (max > 0 && max > min)
	{
		max--;
		count2++;
	}
	if (!(store = malloc((count1 + count2 + 1) * sizeof(int))))
		return (NULL);
	a = 0;
	while (count1 > 0)
	{
		store[a] = min;
		min++;
		count1--;
		a++;
	}
	while (count2 > 0)
	{
		store[a] = max;
		max--;
		count2++;
		a++;
	}
	if (min >= max)
	{
		store = NULL;
		return (store);
	}
	return (store);
}
