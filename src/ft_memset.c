#include "Libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*dest;
	int				i;

	i = 0;
	dest = dst;
	while (len > 0)
	{
		dest[i++] = c;
		len--;
	}
	return (dest);
}
