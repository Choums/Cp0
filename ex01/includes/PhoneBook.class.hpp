/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:01 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/18 16:28:53 by root             ###   ########.fr       */
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
	bool	is_used(int index) const;
	
	/*	Accessors */
	void		setRep(Contact *rep, int index);
	std::string	getRep(int index) const;
	int			getIndex() const;
	
	private:
	Contact 	_rep[8];
	int			_index;
};


#endif