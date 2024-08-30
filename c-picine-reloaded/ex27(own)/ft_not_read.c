/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_not_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:53:30 by dyao              #+#    #+#             */
/*   Updated: 2024/06/08 18:45:07 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_not_read(void)
{
	char	*a;
	int		counter;

	counter = 0;
	a = "Cannot read file.";
	while (a[counter])
	{
		ft_putchar(a[counter]);
		counter++;
	}
}
