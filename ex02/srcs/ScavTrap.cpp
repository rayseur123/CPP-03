/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:29:47 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 11:41:34 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	_name = "default";
	_point_health = 100;
	_point_energy = 50;
	_attack_damage = 20;
	std::cout << "A new ScavTrap !" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_point_health = 100;
	_point_energy = 50;
	_attack_damage = 20;
	std::cout << "A new ScavTrap !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "We lost a ScavTrap... " << std::endl;	
}

void	ScavTrap::attack(const std::string &target) const
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void 	ScavTrap::highFivesGuys(void) const
{
	std::cout << "ScavTrap " << _name << " would like to high-five" << std::endl;
}