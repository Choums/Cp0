/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:03 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/19 20:05:43 by chaidel          ###   ########.fr       */
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
	std::getline (std::cin, this->_first_name);
	std::cout << "last name: ";
	std::getline (std::cin, this->_last_name);
	std::cout << "nickname: ";
	std::getline (std::cin, this->_nickname);
	std::cout << "number: ";
	std::getline (std::cin, this->_number);
	std::cout << "darkest secret: ";
	std::getline (std::cin, this->_secret);
	this->_taken = true;
}