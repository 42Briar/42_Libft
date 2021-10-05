int	ft_atoi(const char *str)
{
	int	i;
	int	out;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		out = out * 10 + (str[i] - 48);
		i++;
	}
	if (str[0] == '-')
		out = -out;
	return (out);
}
