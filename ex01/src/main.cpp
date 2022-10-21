/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:09 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/21 15:10:31 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

int	main(void)
{
	std::string	buff;
	PhoneBook	phone;

	std::cout << "\t   *	Welcome *" << std::endl;
	while (true)
	{
		std::cout << "\t   * ADD/SEARCH/EXIT *" << std::endl;
		std::getline (std::cin, buff);
		if (std::cin.eof())
			return (0);
		if (!buff.compare("ADD"))
		{
			std::cout << "\t   * Adding new contact *" << std::endl;
			phone.add();
		}
		else if (!buff.compare("SEARCH"))
		{
			phone.search();
		}
		else if (!buff.compare("EXIT"))
			break ;
		else
		{
			std::cout << "\t   * Unknown command *" << std::endl;
			
		}
	}
	std::cout << "\t   * Have a good day *" << std::endl;
	return (0);
}