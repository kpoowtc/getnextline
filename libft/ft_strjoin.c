/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:17:28 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/12 11:40:53 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*acc_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	acc_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!acc_str)
		return (NULL);
	ft_strcpy(acc_str, s1);
	ft_strcat(acc_str, s2);
	return (acc_str);
}
