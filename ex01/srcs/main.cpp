/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:47:50 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 10:30:48 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	unsigned int	repaired_value = 1;
	unsigned int	damage_value = 5;

	ClapTrap	tom("Tom");
	ClapTrap	lucas("Lucas");
	ScavTrap	scav("Nicolas");

	lucas.attack("Tom");
	tom.attack("Lucas");
	tom.attack("Lucas");

	lucas.beRepaired(repaired_value);
	tom.beRepaired(repaired_value);
	tom.beRepaired(repaired_value);
	
	lucas.takeDamage(damage_value);
	tom.takeDamage(damage_value);
	tom.takeDamage(damage_value);
	
	scav.guardGate();
	return (0);
}