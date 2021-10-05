#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *sorc;

	if (dst == src)
		return (dst);
	dest = dst;
	sorc = src;
	if (dest > sorc)
	{
		while (len > 0)
		{	
			*(dest + len) = *(sorc + len);
			len--;
		}
		return (dst);
	}
	while (len > 0)
	{
		*dest++ = *sorc++;
		len--;
	}
	return (dst);
}

// int main( void )
// {
//     char buffer[80];

//     strcpy( buffer, "World");
//     ft_memmove( buffer+1, buffer, 79 );
//     printf ("%s\n", buffer);
    
// }