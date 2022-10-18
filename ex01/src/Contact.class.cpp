/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:03 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/18 16:23:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

Contact::Contact(void) : _taken(false)
{
	// std::cout << "constructor called" << std::endl;
	// this->_taken = false;
}

Contact::~Contact(void)
{}

std::string	Contact::getFname() const
{
	return (this->_first_name);
}

std::string	Contact::getLname() const
{
	return (this->_last_name);
}

std::string	Contact::getNname() const
{
	return (this->_nickname);
}

std::string	Contact::getNum() const
{
	return (this->_number);
}

std::string	Contact::getSecret() const
{
	return (this->_secret);
}

bool	Contact::getTaken() const
{
	if (this->_taken)
		return (true);
	else
		return (false);
}

void	Contact::setCon()
{
	std::string	input;

	std::cout << "first name: ";
	std::cin >> this->_first_name;
	if (std::cin.eof())
		return ;
	std::cout << "last name: ";
	std::cin >> this->_last_name;
	if (std::cin.eof())
		return ;
	std::cout << "nickname: ";
	std::cin >> this->_nickname;
	if (std::cin.eof())
		return ;
	std::cout << "number: ";
	std::cin >> this->_number;
	if (std::cin.eof())
		return ;
	std::cout << "darkest secret: ";
	std::cin >> this->_secret;
	if (std::cin.eof())
		return ;
	this->_taken = true;
}

// void	Contact::_clear(std::string str)
// {
	
// }