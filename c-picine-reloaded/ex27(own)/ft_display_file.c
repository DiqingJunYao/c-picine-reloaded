/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:29:06 by dyao              #+#    #+#             */
/*   Updated: 2024/06/08 19:09:43 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char	*s)
{
	char	buffer[10];
	int		bytesread;
	int		counter;
	int		openmark;

	bytesread = 0;
	openmark = open(s, O_RDONLY);
	bytesread = read(openmark, buffer, sizeof(buffer));
	if (bytesread == -1)
	{
		ft_error_msg(3);
		close(openmark);
	}
	buffer[bytesread] = '\0';
	counter = 0;
	while (counter < bytesread)
	{
		ft_putchar(buffer[counter]);
		counter++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_error_msg(1);
	if (argc > 2)
		ft_error_msg(2);
	ft_display_file(argv[1]);
	return (0);
}
