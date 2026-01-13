/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:29:47 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 12:50:20 by njooris          ###   ########.fr       */
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

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	this->_name = scavtrap._name;
	this->_point_health = scavtrap._point_health;
	this->_point_energy = scavtrap._point_energy;
	this->_attack_damage = scavtrap._attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target) const
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void 	ScavTrap::guardGate(void) const
{
	std::cout << "FragTrap " << _name << " is now in GateKeeper mode" << std::endl;
}