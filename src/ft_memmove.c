#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	int i;

	i = 0;
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
			((char *)dst)[i] = ((char *)src)[i];
	}
	else
	{
		ft_memcpy(dst, src, len); //why does this not work bruh
	}
	return (0);
}

int main( void )
{
    char buffer[80];

    strcpy( buffer, "World");
    ft_memmove( buffer+1, buffer, 79 );
    printf ("%s\n", buffer);
    
}