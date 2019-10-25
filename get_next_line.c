/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:41:51 by kpoo              #+#    #+#             */
/*   Updated: 2019/08/16 09:38:48 by kpoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static char		*verif_line(char **line_acc, char *p_line)
{
	int		endl;
	char	*acc;

	endl = 0;
	while (p_line[endl] != '\n' && p_line[endl] != '\0')
		endl++;
	*line_acc = ft_strsub(p_line, 0, endl);
	if (ft_strcmp(*line_acc, p_line) == 0)
		p_line = NULL;
	else
	{
		acc = p_line;
		p_line = ft_strsub(p_line, endl + 1, ft_strlen(p_line + endl + 1));
		free(acc);
	}
	return (p_line);
}

int				get_next_line(const int fd, char **line)
{
	int			r_return;
	char		*temp;
	static char	*gnl_line[1024];
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!gnl_line[fd])
		gnl_line[fd] = ft_strnew(BUFF_SIZE);
	while ((r_return = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[r_return] = '\0';
		temp = ft_strjoin(gnl_line[fd], buf);
		free(gnl_line[fd]);
		gnl_line[fd] = temp;
		if (ft_strchr(gnl_line[fd], '\n'))
			break ;
	}
	if ((r_return < BUFF_SIZE) && !ft_strlen(gnl_line[fd]))
		return (0);
	gnl_line[fd] = verif_line(line, gnl_line[fd]);
	return (1);
}
