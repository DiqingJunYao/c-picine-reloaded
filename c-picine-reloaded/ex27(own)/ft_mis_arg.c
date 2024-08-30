/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mis_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:44:29 by dyao              #+#    #+#             */
/*   Updated: 2024/06/08 18:44:52 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_mis_arg(void)
{
	char	*a;
	int		counter;

	counter = 0;
	a = "File name missing.";
	while (a[counter])
	{
		ft_putchar(a[counter]);
		counter++;
	}
}
