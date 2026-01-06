/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:12:29 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 10:18:28 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
		
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &DiamondTrap);
		~DiamondTrap(void);
		
		void	attack(const std::string &target) const;
};

#endif