/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:21:04 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/24 20:36:37 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include <libft.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_fd
{
	int				fd;
	char			*current;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(int fd, char **line);

#endif
