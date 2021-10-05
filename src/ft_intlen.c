#include "Libft.h"

int ft_intlen(int val)
{
    int i;

    if (val < 0)
        val = -val;
    while(val > 9)
    {
        i++;
        val /= 10;
    }  
    return i;
}