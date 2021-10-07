#include "Libft.h"

char	*ft_itoa(int n)
{
	char	*out;
	int		i;
	int		nbr;

	i = 0;
	out = (char *)malloc(sizeof(char) * (ft_intlen(n) + 2));
	if (!out)
		return (NULL);
	nbr = n;
	if (nbr == 0)
		out[i++] = '0';
	if (nbr < 0)
	{
		out[i++] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		out[i++] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	out[i] = 0;
	ft_strrev(out);
	return (out);
}
