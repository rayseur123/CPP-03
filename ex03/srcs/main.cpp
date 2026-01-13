/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:47:50 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 12:22:14 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	unsigned int	repaired_value = 1;
	unsigned int	damage_value = 5;

	// ClapTrap	tom("Tom");
	// ClapTrap	lucas("Lucas");
	// ScavTrap	scav("Nicolas");
	// FragTrap	frag("Devan");
	DiamondTrap	diam("Nikandr");

	// lucas.attack("Tom");
	// tom.attack("Lucas");
	// frag.attack("Lucas");
	// scav.attack("Lucas");
	diam.attack("Lucas");
	
	// lucas.beRepaired(1);
	// tom.beRepaired(1);
	// frag.beRepaired(1);
	// scav.beRepaired(1);
	diam.beRepaired(repaired_value);
	
	// lucas.takeDamage(5);
	// tom.takeDamage(5);
	// frag.takeDamage(5);
	// scav.takeDamage(5);
	diam.takeDamage(damage_value);
	
	// frag.guardGate();
	// scav.highFivesGuys();
	diam.whoAmI();
	return (0);
}