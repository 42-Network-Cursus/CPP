/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:46:38 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 11:46:40 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact 
{
public:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	darkestSecret;
	std::string phoneNumber;
};

#endif
