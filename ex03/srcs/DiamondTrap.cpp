/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:56:37 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 11:33:55 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), _name("default")
{
	_point_health = FragTrap::_point_health;
	_point_energy = ScavTrap::_point_energy;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "A new DiamondTrap !" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),  _name(name)
{
	_point_health = FragTrap::_point_health;
	_point_energy = ScavTrap::_point_energy;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "A new DiamondTrap !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap)
{
	_name = DiamondTrap.get_name();
	_point_health = DiamondTrap.get_point_health();
	_point_energy = DiamondTrap.get_point_energy();
	_attack_damage = DiamondTrap.get_attack_damage();
	std::cout << "A new DiamondTrap !" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "We lost a DiamondTrap... " << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamondtrap)
{
	this->_name = diamondtrap.get_name();
	this->_point_health = diamondtrap.get_point_health();
	this->_point_energy = diamondtrap.get_point_energy();
	this->_attack_damage = diamondtrap.get_attack_damage();
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) const
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name: " << _name << std::endl;
	std::cout << "CalpTrap name: " << ClapTrap::get_name() << std::endl;
}