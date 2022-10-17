/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:01 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/17 19:26:18 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "all.hpp"

class PhoneBook {
	public:
	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void) const;
	int		is_used(int index) const;
	
	/*	Accessors et Getters */
	void		setrep(Contact* &rep, int index);
	std::string	getrep(int index) const;
	int			getindex() const;
	
	private:
	Contact _rep[8];
	int		_index;
};


#endif