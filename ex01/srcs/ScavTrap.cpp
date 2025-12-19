/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:29:47 by njooris           #+#    #+#             */
/*   Updated: 2025/12/19 15:06:05 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	_name = "default";
	_point_health = 10;
	_point_energy = 10;
	_attack_damage = 0;
	std::cout << "A new ScavTrap !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "We lost a ScavTrap... " << std::endl;	
}

void	ScavTrap::attack(std::string &target) const
{
	std::cout << "ScavTrap" << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}