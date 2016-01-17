#include "ft_ls.h"
#include <stdio.h>

void	threw_error(int error, char *str)
{
	if (error == 0)
	{
		perror(str);
		exit(1);
	}
	else if (error == 0)
	{
		perror(str);
		exit(1);
	}
	else
	{
		perror("unknown error");
		exit(2);
	}
}

void	check_option(char *params, int nb)
{
	// TODO: check -l option
	if (params[nb] == 'l')
		ENV->flags[LONG] += 1;
	// TODO: check -R option
	else if (params[nb] == 'R')
		ENV->flags[RECURSIVE] += 1;
	// TODO: check -a option
	else if (params[nb] == 'a')
		ENV->flags[ALL] += 1;
	// TODO: check -r option
	else if (params[nb] == 'r')
		ENV->flags[REVERSE] += 1;
	// TODO: check -t option
	else if (params[nb] == 't')
		ENV->flags[BYTIME] += 1;
	// TODO: otherwhile threw an error
	else
		threw_error(1, params);
	if (nb > 1)
		check_option(params, nb - 1);
}

void	check_long_options(char *params)
{
	// TODO: check recursive option
	if (ft_strcmp(params, "--recursive") == 0)
		ENV->flags[RECURSIVE] += 1;
	// TODO: check all option
	else if (ft_strcmp(params, "--all") == 0)
		ENV->flags[ALL] += 1;
	// TODO: check reverse option
	else if (ft_strcmp(params, "--reverse") == 0)
		ENV->flags[REVERSE] += 1;
	// TODO: otherwhile exit with error with the option
	else
		threw_error(0, params);
}

void	check_options(char *params)
{
	printf("param: %s\n", params);
	// TODO: if '--' then check_long_options
	if (params[1] == '-')
	{
		printf("test\n");
		check_long_options(params);
	}
	else
		check_option(params, ft_strlen(params) - 1);
}

void	save_flags(int flags, char **params)
{
	int	i;

	i = 0;
	while (i < flags)
	{
		check_options(params[i]);
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
	for (int i = 0; i < 5; i++)
	{
		printf("option %d: %d\n", i, ENV->flags[i]);
	}
}
