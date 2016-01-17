/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:02:44 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/24 19:52:31 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static t_fd				*get_fd(int fd)
{
	static t_fd			*fd_list = NULL;
	t_fd				*tmp;

	tmp = fd_list;
	while (tmp && tmp->fd != fd)
		tmp = tmp->next;
	if (!tmp)
	{
		if (!(tmp = (t_fd*)malloc(sizeof(t_fd))))
			return (NULL);
		tmp->fd = fd;
		tmp->current = NULL;
		tmp->next = fd_list;
		fd_list = tmp;
	}
	return (tmp);
}

static void				set_fd(int s, char *buff, t_fd *fd_list)
{
	char				*tmp;

	tmp = (*buff ? ft_strsub(buff, 0, s) : NULL);
	if (fd_list->current)
		fd_list->current = ft_strjoin(fd_list->current, tmp);
	else
		fd_list->current = ft_strdup(tmp);
	ft_strdel(&tmp);
	ft_strdel(&buff);
}

static int				set_line(char **line, t_fd *fd_list, char *tmp)
{
	if (tmp)
	{
		*tmp++ = '\0';
		tmp = ft_strdup(tmp);
		*line = ft_strdup(fd_list->current);
		ft_strdel(&fd_list->current);
		fd_list->current = tmp;
	}
	else
	{
		if ((tmp = ft_strchr(fd_list->current, '\0')))
			tmp = ft_strdup(tmp + 1);
		*line = ft_strdup(fd_list->current);
		if (tmp)
		{
			ft_strdel(&fd_list->current);
			fd_list->current = tmp;
		}
	}
	return (1);
}

int						get_next_line(int fd, char **line)
{
	t_fd				*fd_list;
	char				*buff;
	char				*tmp;
	int					size;

	size = 0;
	if (!(fd_list = get_fd(fd)) || !line || fd < 0)
		return (-1);
	if (!(buff = (char*)malloc(BUFF_SIZE)))
		return (-1);
	tmp = (fd_list->current ? ft_strchr(fd_list->current, '\n') : NULL);
	if (tmp)
		return (set_line(line, fd_list, tmp));
	if ((size = (int)read(fd, buff, BUFF_SIZE)) <= 0)
		return (!*(fd_list->current) ? size : set_line(line, fd_list, tmp));
	if (size > 0)
		set_fd(size, buff, fd_list);
	return (get_next_line(fd, line));
}
