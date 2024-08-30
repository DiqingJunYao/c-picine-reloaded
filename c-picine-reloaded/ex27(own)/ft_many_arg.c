/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_many_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:52:17 by dyao              #+#    #+#             */
/*   Updated: 2024/06/08 18:44:45 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_many_arg(void)
{
	char	*a;
	int		counter;

	counter = 0;
	a = "Too many arguments.";
	while (a[counter])
	{
		ft_putchar(a[counter]);
		counter++;
	}
}
