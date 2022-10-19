/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:12 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/19 20:02:29 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

PhoneBook::PhoneBook(void) : _index(0), _isc(0)
{
	// std::cout << "Phone constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{}

int	PhoneBook::getIndex() const
{
	return (this->_index);
}

bool PhoneBook::is_used(int	index) const
{
	return (this->_rep[index].getTaken());
}

/*
 *	Enregistre un nouveau contact
 *	Ajoute le contact et ses infos au plus petit index libre
 *	Sinon le nouveau contact ecrase le plus viel index
 *	-------------------------------------
 *	
 * 
*/
void	PhoneBook::add()
{
	if (this->_index < 8)
	{
		this->setRep(_rep, this->_index);
		this->_index+=1;
	}
	else
	{
		this->setRep(_rep, this->_isc);
		this->_isc+=1;
	}	
}

/*	Appel le setter de Contact */
void	PhoneBook::setRep(Contact *rep, int index)
{
	rep[index].setCon();
}

/*
 *	Affiche l'entièreté du répertoire
 *	std::cout << << std::endl;
*/
void	PhoneBook::getRep(int index) const
{
	std::cout << "firstname: " << this->_rep[index].getFname() << std::endl;
	std::cout << "lastname: " << this->_rep[index].getLname() << std::endl;
	std::cout << "nickname: " << this->_rep[index].getNname() << std::endl;
	std::cout << "number: " << this->_rep[index].getNum() << std::endl;
	std::cout << "secret: " << this->_rep[index].getSecret() << std::endl;
}

/*
 *	Affiche le contact demande
 *	L'affichage est formate en liste de 4 colonnes: index, fname, lname, nickname
 *	Chaque colonne a 10 caract. de longueur (le texte est tronque et le dernier char est un '.')
 * 
 * size
 * resize
 * shrink_to_fit
 * 
*/
void	PhoneBook::search(void) const
{
	std::string	input;
	std::cout << "\t   *** PHONE REPERTORY ***" << std::endl;
	std::cout << "|     Index| Firstname|  Lastname|  Nickname|" << std::endl;
	for (int y(0); y < 8; y++)
	{
		std::cout << "|";
		for (int i(0); i < 9; i++)
			std::cout << " ";
		std::cout << y;
		std::cout << "|";
		print_str(this->_rep[y].getFname());
		std::cout << "|";
		print_str(this->_rep[y].getLname());
		std::cout << "|";
		print_str(this->_rep[y].getNname());
		std::cout << "|" << std::endl; 
	}
	std::cout << "Contact: " ;
	std::getline (std::cin, input);
	if (input.length() != 1)
	{
		std::cout << "\t   * not a number *" << std::endl;
		return ;
	}
	this->getRep(atoi(input.c_str()));
}

void	PhoneBook::print_str(std::string str) const
{
	int	len(0);

	len = str.size();
	if (len > 9)
	{
		for (int i(0); i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		for (int i(0);i < 10 - len; i++)
			std::cout << " ";
		std::cout << str;
	}
}