/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:33:32 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 18:37:10 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (*s1 == *s2 && *s1 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 == *s2);
}