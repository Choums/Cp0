/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:16 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/17 19:08:04 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "all.hpp"

class Contact {
	public:
	Contact(void);
	~Contact(void);

	std::string	getcon() const;
	void		setcon();
	
	private:
	// void	_clear(std::string str);

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string _number;
	std::string	_secret;
};

#endif