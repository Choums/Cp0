/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:03 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/17 19:08:07 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void	Contact::setcon()
{
	std::string	input;

	std::cout << "first name: ";
	std::cin >> this->_first_name;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	std::cout << "last name: ";
	std::cin >> this->_last_name;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	std::cout << "nickname: ";
	std::cin >> this->_nickname;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	std::cout << "number: ";
	std::cin >> this->_number;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	std::cout << "darkest secret: ";
	std::cin >> this->_secret;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
}

// void	Contact::_clear(std::string str)
// {
	
// }