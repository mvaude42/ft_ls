#include "ft_ls.h"
#include <stdio.h>

void	check_option(char *params, int nb)
{
	if (nb < 0)
		return;
		// TODO: check -l option
		// TODO: check -R option
		// TODO: check -a option
		// TODO: check -r option
		// TODO: check -t option
	check_option(params, nb - 1);
}

void	check_long_options(char *params)
{
	// TODO: check recursive option
	// TODO: check all option
	// TODO: check reverse option
	// TODO: otherwhile exit with error with the option
	(void)params;
}

void	check_options(char *params)
{
		// TODO: if '--' then check_long_options
		if (params[0] == '-')
			check_long_options(params + 1);
		// TODO: check recusrively all char
		check_option(params, ft_strlen(params));
}

void	save_flags(int flags, char **params)
{
	int	i;

	i = 0;
	while (i < flags)
	{
		check_options(params[i] + 1);
		i++;
	}
}

void		save_objects(int flags, char **params)
{
	(void)flags;
	(void)**params;
}

void		save_params(int flags, char **params)
{
	//int		i;
	//t_args	*args;

	//i = ENV->ac;
	save_flags(flags, params);
	//save_objects(flags, params);
}

void	parser(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;
	char**	copy;
	int		flags;

	copy = malloc(ac * sizeof(av));
	flags = 0;
	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '-')
			flags++;
		copy[i - 1] = ft_strdup(av[i]);
		i++;
	}
	
//	printf("number of flags: %d\n", flags);
//	printf("number of ac: %d\n", ENV->ac);

	i = 0;
	while (i < ENV->ac - 1)
	{
		j = 1;
		while (j < ENV->ac - 1)
		{
			if (ft_stricmp(copy[j - 1], copy[j]) > 0)
			{
				tmp = malloc(ft_strlen(copy[j - 1]) * sizeof(copy[j - 1]));
				ft_strcpy(tmp, copy[j - 1]);
				ft_strcpy(copy[j - 1], copy[j]);
				ft_strcpy(copy[j], tmp);
				free(tmp);
			}
			j++;
		}
		i++;
	}
/*
	i = 1;
	while (i < ac)
	{
		printf("#%d: %s\n", i, copy[i]);
		i++;
	}
*/
	save_params(flags, copy);
	i = ENV->ac - 1;
	while (--i >= 0)
		free(copy[i]);
	free(copy);
}

int		main(int ac, char **av)
{
	ft_putstr("hello\n");
	ENV->ac = ac;
	ENV->args = malloc(sizeof(t_args));
	parser(ac, av);
	free(ENV->args->str);
	free(ENV->args);
    //free(ENV);
}
