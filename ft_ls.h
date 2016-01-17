/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:21:04 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/24 20:36:37 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# define ENV ft_env()

# include <libft.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_env
{
	int				fd;
	char			*str;
	struct s_env	*next;
}					t_env;

t_env      *ft_env(void);

#endif
