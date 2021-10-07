#include "Libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	j = 0;
	if (size < 1)
		return (srclen + size);
	while (src[j] && i < size - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	if (size > dstlen)
		return (dstlen + srclen);
	return (size + srclen);
}
