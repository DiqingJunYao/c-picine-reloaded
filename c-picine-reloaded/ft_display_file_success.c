void	ft_display_file(char	*s)
{
	char	buffer;
	int		openmark;

	openmark = open(s, O_RDONLY);
	if (openmark == -1)
	{
		ft_error_msg(3);
		close(openmark);
	}
	while (read(openmark, &buffer, 1) != 0)
	{
		ft_putchar(buffer);
	}
}