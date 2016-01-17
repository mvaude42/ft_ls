#include "ft_ls.h"

int		main(int ac, char **av)
{
	ENV->args = malloc(sizeof(t_args));
	ENV->args->str = ft_strdup("hello");
	ft_putstr(ENV->args->str);
}
