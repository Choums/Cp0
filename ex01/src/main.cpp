/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:09 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/17 19:10:50 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

int	main(void)
{
	std::string	buff;
	PhoneBook	phone;
	while (buff.compare("EXIT"))
	{
		std::cin >> buff;
		if (std::cin.eof())
			return (0);
		if (!buff.compare("ADD"))
		{
			std::cout << "* Adding new contact *" << std::endl;
			phone.add();
		}
		else if (!buff.compare("SEARCH"))
		{
			std::cout << "* who *" << std::endl;
		}
		else
		{
			std::cout << "* Unknown command *" << std::endl;
		}
	}
	// std::cout << "*  *" << std::endl;
	return (0);
}