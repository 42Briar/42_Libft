#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int len)
{
	unsigned char		*dest;
	const unsigned char	*sorc;

	dest = dst;
	sorc = src;
	while (len > 0)
	{
		*dest++ = *sorc++;
		len--;
	}
	return (0);
}
