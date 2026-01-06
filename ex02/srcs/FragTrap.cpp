/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:29:47 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 11:41:24 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	_name = "default";
	_point_health = 100;
	_point_energy = 100;
	_attack_damage = 30;
	std::cout << "A new FragTrap !" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_point_health = 100;
	_point_energy = 100;
	_attack_damage = 30;
	std::cout << "A new FragTrap !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "We lost a FragTrap... " << std::endl;	
}

void	FragTrap::attack(const std::string &target) const
{
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void 	FragTrap::guardGate(void) const
{
	std::cout << "FragTrap " << _name << " is now in GateKeeper mode" << std::endl;
}