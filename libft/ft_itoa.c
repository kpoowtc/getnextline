/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:18:25 by kpoo              #+#    #+#             */
/*   Updated: 2019/06/21 11:59:58 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		temp;
	int		len;
	char	*str;

	len = ft_intlen(n);
	temp = n;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (temp == -2147483648)
		return (str = ft_strdup("-2147483648"));
	str[len] = '\0';
	len--;
	if (temp < 0)
		temp = temp * -1;
	while (temp >= 10)
	{
		str[len] = (temp % 10) + '0';
		temp = temp / 10;
		len--;
	}
	str[len] = (temp % 10) + '0';
	len--;
	if (n < 0)
		str[len] = '-';
	return (str);
}
