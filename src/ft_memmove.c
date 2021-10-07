#include "Libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	int					i;

	i = 0;
	if (dst == src)
		return (dst);
	dest = dst;
	if (src < dst)
		while (len--)
			dest[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
