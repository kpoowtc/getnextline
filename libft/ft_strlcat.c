/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:21:06 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/05 16:51:45 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	while (*(dst + a) && a < dstsize)
		a++;
	while (*(src + b) && (a + b + 1) < dstsize)
	{
		*(dst + a + b) = *(src + b);
		b++;
	}
	if (a < dstsize)
		*(dst + a + b) = '\0';
	return (a + ft_strlen(src));
}
