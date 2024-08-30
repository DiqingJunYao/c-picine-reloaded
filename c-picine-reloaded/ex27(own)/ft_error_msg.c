/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:58:20 by dyao              #+#    #+#             */
/*   Updated: 2024/06/08 18:44:34 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_error_msg(int i)
{
	if (i == 1)
		ft_mis_arg();
	if (i == 2)
		ft_many_arg();
	if (i == 3)
		ft_not_read();
}
