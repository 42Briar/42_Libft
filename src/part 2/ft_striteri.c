#include "Libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    char *str;

    str = s;
    i = 0;
    while (str[i])
    {
        str[i] = f((unsigned int)i, str[i]);
    }
    return 0;
}