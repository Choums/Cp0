/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:12 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/18 17:08:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

PhoneBook::PhoneBook(void) : _index(0)
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
	setRep(&_rep[this->_index], this->_index);
	std::cout << this->_index << std::endl;
	this->_index++;
}

/*
 *	Affiche l'entièreté du répertoire
 *	std::cout << << std::endl;
*/
std::string	PhoneBook::getRep(int index) const
{
	std::cout << "firstname: " << this->_rep[index].getFname() << std::endl;
	std::cout << "lastname: " << this->_rep[index].getLname() << std::endl;
	std::cout << "nickname: " << this->_rep[index].getNname() << std::endl;
	std::cout << "number: " << this->_rep[index].getNum() << std::endl;
	std::cout << "secret: " << this->_rep[index].getSecret() << std::endl;
}

/*	Appel le setter de Contact */
void	PhoneBook::setRep(Contact *rep, int index)
{
	rep[index].setCon();
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
	std::cout << "		*** PHONE REPERTORY ***" << std::endl;
	std::cout << "|     Index| Firstname|  Lastname|  Nickname|" << std::endl;
	for (int y(0); (y < 8 || y < getIndex()); y++)
	{
		for (int x(0); x < 45; x++)
		{
			if (x == 0 || x == 45 - 1 || x == 12-1 || x == 23-1 || x == 34-1 )
				std::cout << "|" << std::endl;
		}
	}
}