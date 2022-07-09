/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:48 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/09 13:04:37 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm sh1("Test");
	std::cout << sh1;
	std::cout << "Target: " << sh1.getTarget() << std::endl;
	return (0);
}