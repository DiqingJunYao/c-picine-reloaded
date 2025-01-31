/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:22:19 by dyao              #+#    #+#             */
/*   Updated: 2024/06/04 15:42:58 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(4));
}*/