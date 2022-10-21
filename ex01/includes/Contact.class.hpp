/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:16 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/21 15:19:38 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "all.hpp"

class Contact {
	public:
	Contact(void);
	~Contact(void);

	std::string	getFname() const;
	std::string	getLname() const;
	std::string	getNname() const;
	std::string	getNum() const;
	std::string	getSecret() const;
	bool		getTaken() const;
	bool		setCon();
	
	private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string _number;
	std::string	_secret;
	bool		_taken;
};

#endif