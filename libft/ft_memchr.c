/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:45:58 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/04 15:13:16 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_copy;
	unsigned char	*s_copy;
	int				i;

	i = 0;
	c_copy = (unsigned char)c;
	s_copy = (unsigned char *)s;
	while (n--)
	{
		if (s_copy[i] == c_copy)
			return (s_copy + i);
		i++;
	}
	return (NULL);
}
