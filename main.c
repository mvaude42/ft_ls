#include "ft_ls.h"
#include <stdio.h>

void	parser(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;
	char**	copy;

	copy = malloc(sizeof(av));
	i = 0;
	while (i < ac)
	{
		copy[i] = ft_strdup(av[i]);
		printf("%d ROUND\n", i);
		ft_putstr(av[i]);
		ft_putstr("\n");
		ft_putstr("---------------------\n");
		i++;
	}

	i = 0;
	while (i < ac)
	{
		j = 1;
		printf("i= %d\n",i);
		while (j < ac)
		{
			printf("j= %d\n", j);
			if (ft_strcmp(copy[j - 1], copy[j]) > 0)
			{
				printf("try\n");
				tmp = malloc(sizeof(copy[j - 1]));
				ft_strcpy(tmp, copy[j - 1]);
				ft_strcpy(copy[j - 1], copy[j]);
				ft_strcpy(copy[j], tmp);
				free(tmp);
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < ac)
	{
		printf("#%d: %s\n", i, copy[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	ENV->args = malloc(sizeof(t_args));
	ENV->args->str = ft_strdup("hello\n");
	ft_putstr(ENV->args->str);
	parser(ac, av);
	free(ENV->args->str);
	free(ENV->args);
    //free(ENV);
}
