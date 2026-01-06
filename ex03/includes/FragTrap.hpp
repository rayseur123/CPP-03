/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:01:12 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 11:11:08 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &fragTrap);
		~FragTrap(void);
		
		FragTrap	&operator=(const FragTrap &fragTrap);

		void	attack(const std::string &target) const;
		void 	guardGate(void) const;		
};

#endif