#include "Libft.h"

char	*ft_itoa(int n)
{
	char	*out;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_intlen(n) + 1;
	if (n < 0)
		i += 1;
	out = (char *)malloc(sizeof(char) * (i + 1));
	if (!out)
		return (NULL);
	out[i--] = 0;
	if (n < 0)
	{
		out[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		out[i--] = n % 10 + 48;
		n /= 10;
	}
	return (out);
}
