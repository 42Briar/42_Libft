void	ft_bzero(void *dst, unsigned int n)
{
	unsigned char	*dest;

	dest = dst;
	while (n > 0)
	{
		*dest++ = 0;
		n--;
	}
}
