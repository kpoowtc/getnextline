/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:16:06 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/12 12:05:59 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*acc_str;
	size_t	i;

	if (!s)
		return (NULL);
	acc_str = ft_strnew(len);
	if (!acc_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		acc_str[i] = s[start];
		i++;
		start++;
	}
	return (acc_str);
}
