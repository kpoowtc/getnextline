/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:29:05 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/05 16:32:08 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t a;
	size_t b;

	a = 0;
	if (*nee == 0)
		return ((char *)hay);
	while (hay[a] != '\0' && a < len)
	{
		b = 0;
		while (nee[b] == hay[a + b] && a + b < len)
		{
			if (nee[b + 1] == '\0')
			{
				return ((char *)(hay + a));
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
