#include "ft_ls.h"

int		main(int ac, char **av)
{
	ENV->args->str = ft_strdup("hello");
	ft_putstr(ENV->args->str);
}
