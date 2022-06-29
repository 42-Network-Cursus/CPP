/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:04:55 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 13:18:33 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
# define HARL

# include <string>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl(void);
	~Harl(void);
	
	void	complain(std::string level);
};

#endif