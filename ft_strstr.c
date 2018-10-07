/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:39:36 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/06 20:03:14 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *s;
	const char *substr;

	substr = needle;

	if (*substr == 0)
		return (haystack);
	while (*haystack)
	{
		s = haystack;
		while (*s++ == *substr++)
			if (*substr == 0)
				return (haystack);
		substr = needle;
		haystack++;
	}
	return (NULL);
}
