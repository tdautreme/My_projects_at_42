/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pduhard- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 23:56:32 by pduhard-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 00:15:22 by pduhard-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	nb;
	int		neg;

	neg = 0;
	if (n == -2147483648)
	{
		(write(1, "-214748364", 10));
		n = 8;
	}
	if (n < 0)
	{
		neg = 1;
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	nb = (n % 10) + '0';
	if (neg != 1)
		write(1, &nb, 1);
}
