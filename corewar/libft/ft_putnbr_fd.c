/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pduhard- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 00:23:44 by pduhard-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 00:27:07 by pduhard-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;
	int		neg;

	neg = 0;
	if (n == -2147483648)
	{
		(write(fd, "-214748364", 10));
		n = 8;
	}
	if (n < 0)
	{
		neg = 1;
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	nb = (n % 10) + '0';
	if (neg != 1)
		write(fd, &nb, 1);
}
