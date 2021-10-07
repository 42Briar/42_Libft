#include "Libft.h"

int	ft_intlen(int val)
{
	int	i;

	i = 0;
	if (val < 0)
		val = -val;
	while (val > 9)
	{
		i++;
		val /= 10;
	}
	return (i);
}
