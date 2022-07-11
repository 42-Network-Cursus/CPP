/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:47:18 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:37:32 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <ostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <sstream>

class PhoneBook 
{
private:
	Contact _list[8];
public:
	void	addContact();
	void	searchContact();
};

#endif
