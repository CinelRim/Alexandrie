/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:54:24 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/11/29 21:50:43 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
		if (*s++ != c && (*s == c || *s == '\0'))
			count++;
	return (count);
}

static int	ft_wordlen(char const *s, char c)
{
	int count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(*ret) * ft_wordcount(s, c) + 1)))
		return (NULL);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!(ret[count] = (char *)malloc(ft_wordlen(s, c) + 1)))
				return (NULL);
			i = 0;
			while (*s != c && *s != '\0')
				ret[count][i++] = *s++;
			ret[count++][i] = '\0';
		}
		else
			s++;
	}
	ret[count] = NULL;
	return (ret);
}
