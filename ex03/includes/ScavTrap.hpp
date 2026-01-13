/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:01:12 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 10:37:41 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& scavtrap);
		~ScavTrap(void);
		
		ScavTrap&	operator=(const ScavTrap& scavtrap);

		void	attack(const std::string& target) const;
		void 	highFivesGuys(void) const;		
};

#endif