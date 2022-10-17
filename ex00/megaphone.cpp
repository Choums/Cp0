#include <iostream>

int main(int ac, char **av)
{
	int	i = 0;
	int	j;

	if (ac == 1)
	{
		(void)av;
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (av[++i])
		{
			j = 0;
			while(av[i][j])
				std::cout << (char)toupper(av[i][j++]);
		}
		std::cout << std::endl;
	}
	return (0);
}