/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:38:16 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/19 20:05:56 by chaidel          ###   ########.fr       */
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
	void		setCon();
	// void	_clear(std::string str);
	
	private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string _number;
	std::string	_secret;
	bool		_taken;
};

#endif