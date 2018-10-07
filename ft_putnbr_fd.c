/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 21:56:37 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 22:16:33 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		nb = (unsigned int)-n;
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr (nb / 10);
	c = (char)(nb % 10 + 48);
	write(fd, &c, 1);
}
