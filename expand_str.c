#include <unistd.h>

int	ft_strlen(char *str)
{
	int  i = 0;
	while (str[i])
		i++;
	return (i);
}
int	count_all_space(char *str)
{
	int count_space = 0;
	while (*str)
	{
		if (*str  == ' ' || (*str   >= '\t' && *str  <= '\r'))
		{
			count_space++;
			while (*str == ' ' || (*str   >= '\t' && *str  <= '\r'))
				*str++;
		}
		*str++;
	}
	return (count_space);
}

char	*delete_first_space(char *str)
{
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		*str++;
	return (str);
}

int	delete_last_space(char *str)
{
	int delete_space = 0;
	int count_end;
	count_end = ft_strlen(str);
	if (str[count_end - 1] == ' ' || (str[count_end - 1] >= '\t' && str[count_end - 1] <= '\r'))
		delete_space++;
	return (delete_space);
}
void	main(int ac, char **av)
{
	int last_space = 0;
	int	total_needed_space = 0;
	int space_index = 0;
	int total_space_used;
	if (ac == 2)
	{
		av[1] = delete_first_space(av[1]);
		total_needed_space = count_all_space(av[1]);
		last_space = delete_last_space(av[1]);
		total_space_used = total_needed_space - last_space;
		while (*av[1] != '\0')
		{
			if (*av[1] == ' ' || (*av[1] >= '\t' && *av[1] <= '\r'))
			{
				if (total_space_used > 0)
				{
					while (*av[1] == ' ' || *av[1] >= '\t' && *av[1] <= '\r')
						*av[1]++;
					write (1, "   ", 3);
					--total_space_used;
				}
				else 
					break;
			}
			write (1, &*av[1], 1);
			*av[1]++;
		}
	}
	write (1, "\n", 1);
}
