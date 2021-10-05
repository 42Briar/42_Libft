#include "Libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*dest;

	dest = dst;
	while (len > 0)
	{
		*dest++ = c;
		len--;
	}
}
