/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:24 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/17 18:38:25 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				std::cout << (char)std::toupper(av[i][j++]);
		}
		std::cout << std::endl;
	}
	return (0);
}