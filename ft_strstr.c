/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:06:16 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/29 18:12:42 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *s;
	const char *substr;

	if (!(*needle))
		return (char *)(haystack);
	while (*haystack)
	{
		substr = needle;
		s = haystack;
		while (*s++ == *substr++)
			if (!(*substr))
				return (char *)(haystack);
		haystack++;
	}
	return (NULL);
}
