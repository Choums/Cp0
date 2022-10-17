/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:12 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/17 19:27:05 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/all.hpp"

PhoneBook::PhoneBook(void)
{}

PhoneBook::~PhoneBook(void)
{}

int	PhoneBook::getindex() const
{
	return (this->_index);
}

int	PhoneBook::is_used(int	index) const
{
	return (0);
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
	
}

std::string	PhoneBook::getrep(int index) const
{
	this->_rep[index];
}

void	PhoneBook::setrep(Contact* &rep, int index)
{
	rep[index].setcon();
}


/*
 *	Affiche le contact demande
 *	L'affichage est formate en liste de 4 colonnes: index, fname, lname, nickname
 *	Chaque colonne a 10 caract. de longueur (le texte est tronque et le dernier char est un '.')
 * 
 * 
*/
void	PhoneBook::search(void) const
{
	
}