/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pduhard- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 18:48:59 by pduhard-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 14:05:26 by pduhard-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	size_t len;
	size_t i;

	if (s != NULL && (*f) != NULL)
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
			(*f)(&s[i++]);
	}
}
