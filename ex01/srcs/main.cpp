/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:47:50 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 14:34:54 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	tom("Tom");
	ClapTrap	lucas("Lucas");
	ScavTrap	scav("Nicolas");

	lucas.attack("Tom");
	tom.attack("Lucas");
	tom.attack("Lucas");

	lucas.beRepaired(1);
	tom.beRepaired(1);
	tom.beRepaired(1);
	
	lucas.takeDamage(5);
	tom.takeDamage(5);
	tom.takeDamage(5);
	
	scav.guardGate();
	return (0);
}