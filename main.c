#include "ft_ls.h"
#include <stdio.h>

void	parser(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;
	char**	copy;
	int		flags;

	copy = malloc(ac * sizeof(av));
	flags = 0;
	i = 0;
	while (i < ac)
	{
		if (av[i][0] == '-')
			flags++;
		copy[i] = ft_strdup(av[i]);
		i++;
	}
	
	printf("number of flags: %d\n", flags);

	i = 0;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_stricmp(copy[j - 1], copy[j]) > 0)
			{
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
