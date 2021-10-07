#include "Libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sorc;
	int					i;

	if (!dst && !src)
		return (dst);
	i = 0;
	dest = dst;
	sorc = src;
	while (len > 0)
	{
		dest[i] = sorc[i];
		i++;
		len--;
	}
	return (dest);
}
