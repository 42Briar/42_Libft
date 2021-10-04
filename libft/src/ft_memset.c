void	*ft_memset(void *dst, int c, unsigned int len)
{
	unsigned char	*dest;

	dest = dst;
	while (len > 0)
	{
		*dest++ = c;
		len--;
	}
}
