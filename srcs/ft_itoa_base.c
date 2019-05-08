#include "libft.h"

char			*ft_itoa_base(int n, unsigned int base)
{
	char			*res;
	unsigned int	nb;
	int				i;
	int				len;
	const char		base_vals[] = "0123456789abcdef";

	nb = (n < 0 && base == 10 ? -n : n);
	len = ft_nblenbase(nb, base) + (n < 0 && base == 10 ? 1 : 0);
	if (!(res = ft_strnew(len)))
		return (NULL);
	i = 0;
	if (n < 0 && base == 10)
		res[i++] = '-';
	while (i < len)
	{
		res[--len] = base_vals[nb % base];
		nb /= base;
	}
	return (res);
}