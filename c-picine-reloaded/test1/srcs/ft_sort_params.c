/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:32:49 by dyao              #+#    #+#             */
/*   Updated: 2024/06/06 18:44:24 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	c;

	a = 1;
	while (a < argc)
	{
		c = 0;
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
				ft_swap(&argv[a], &argv[b]);
			b++;
		}
		while (argv[a][c] != '\0')
		{
			ft_putchar(argv[a][c]);
			c++;
		}
		ft_putchar('\n');
		a++;
	}
}
