/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:46:38 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:38:19 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact 
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_darkestSecret;
	std::string _phoneNumber;
public:
	std::string	getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getDarkestSecret() const;
	std::string getPhoneNumber() const;

	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickname(std::string nickname);
	void	setDarkestSecret(std::string darkestSecret);
	void	setPhoneNumber(std::string phoneNumber);

};

#endif
