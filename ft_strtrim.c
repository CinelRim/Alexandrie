/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:51:31 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/07 19:10:33 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	start;
	unsigned long	len;

	start = 0;
	len = 0;
	while (s[start] == 32 || s[start] == 09 || s[start] == 10)
		start++;
	while (!(s[len] == 32 || s[len] == 09 || s[len] == 10) && s[len])
		len++;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	len  = 0;
	while (!(s[len] == 32 || s[len] == 09 || s[len] == 10) && s[len])
	{
		ret[len] = s[start + len];
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
