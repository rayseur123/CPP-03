/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:47:50 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 10:50:14 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	tom("Tom");
	ClapTrap	lucas("Lucas");
	ScavTrap	scav("Nicolas");
	FragTrap	frag("Devan");
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
	diam.beRepaired(1);
	
	// lucas.takeDamage(5);
	// tom.takeDamage(5);
	// frag.takeDamage(5);
	// scav.takeDamage(5);
	diam.takeDamage(5);
	
	frag.guardGate();
	scav.highFivesGuys();
	return (0);
}