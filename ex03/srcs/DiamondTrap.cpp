/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:56:37 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 10:49:45 by njooris          ###   ########.fr       */
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

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),  _name(name)
{
	_point_health = FragTrap::_point_health;
	_point_energy = ScavTrap::_point_energy;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "A new DiamondTrap !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap)
{
	(void)DiamondTrap;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "We lost a DiamondTrap... " << std::endl;
}

void	DiamondTrap::attack(const std::string &target) const
{
	ScavTrap::attack(target);
}