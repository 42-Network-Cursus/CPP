/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:47:18 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 10:26:43 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <ostream>
# include <string>
# include <iomanip>
# include <cstdio>

class PhoneBook 
{
private:
	Contact _list[8];
public:
	void	addContact();
	void	searchContact();
};

#endif
