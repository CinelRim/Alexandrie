/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 21:25:38 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 22:11:26 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_asize(int n)
{
	int count;

	count = 0;
	if (n < 0)
		count ++;
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char			*ret;
	unsigned int	i;
	unsigned int	nb;

	i = ft_asize(n);
	if (n == 0)
		return ("0");
	if (!(ret = (char *)malloc(i + 1)))
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		nb = (unsigned int)-n;
	}
	else
		nb = (unsigned int)n;
	ret[i--] = '\0';
	while (nb)
	{
		ret[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (ret);
}
