#include "Libft.h"

char *ft_itoa(int n)
{
    int len;
    int i;
    char *out;

    len = ft_intlen(n);
    if (n < 0)
        len++;
    out = (char *)malloc(sizeof(char) * len + 1)
    
    len++;
    out[len] = 0;
    len --;
    while (len > -1)
    {
        out[len--] = (n % 10) + 48;
        n /= 10;
    }
    return (out);
}