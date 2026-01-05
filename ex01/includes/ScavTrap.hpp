/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:01:12 by njooris           #+#    #+#             */
/*   Updated: 2025/12/19 15:09:29 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :
		ScavTrap(void);
		~ScavTrap(void);
		void	attack(std::string &target) const;
		void 	guardGate(void) const;		
};