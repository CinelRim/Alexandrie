/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:32:02 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/10/06 19:35:55 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char ch;
	int i;

	ch = (char) c;
	i = 0;
	while (s[i])
		i++;
	i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return (s + i);
		i--;
	}
	return (NULL);
}