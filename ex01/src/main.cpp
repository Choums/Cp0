/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:09 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/18 16:10:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

int	main(void)
{
	std::string	buff;
	PhoneBook	phone;

	std::cout << "*	Welcome *" << std::endl;
	while (true)
	{
		std::cout << "rep: " << phone.getIndex() << std::endl;
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
		else if (!buff.compare("EXIT"))
			return (0);
		else
			std::cout << "* Unknown command *" << std::endl;
	}
	std::cout << "* Have a good day *" << std::endl;
	return (0);
}