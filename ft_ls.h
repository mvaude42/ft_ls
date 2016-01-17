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
# define ALL 0
# define LONG 1
# define REVERSE 2
# define RECURSIVE 3
# define BYTIME 4

# include <libft.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_args
{
    int             error;
	char			*str;
	struct s_args	*next;
}					t_args;

typedef struct		s_env
{
	char			flags[5];
    struct s_args	*args;
}					t_env;

t_env      *ft_env(void);

#endif
