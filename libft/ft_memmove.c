/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:36:29 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/19 16:15:51 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_copy;
	char	*dst_copy;
	size_t	i;

	if (dst == NULL && src == NULL && len)
		return (dst);
	i = -1;
	src_copy = (char *)src;
	dst_copy = (char *)dst;
	if (src_copy < dst_copy)
		while ((int)(--len) >= 0)
			*(dst_copy + len) = *(src_copy + len);
	else
		while (++i < len)
			*(dst_copy + i) = *(src_copy + i);
	return (dst);
}
