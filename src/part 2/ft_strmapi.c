#include "Libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *out;
    int i;
    
    i = 0;
    out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)
    while(s[i])
        out[i++] = f((unsigned int)i, s[i]);
    i++;            //?
    out[i] = 0;
    return (out);
}