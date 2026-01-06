/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:29:47 by njooris           #+#    #+#             */
/*   Updated: 2026/01/06 11:23:57 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	_name = "default";
	_point_health = 100;
	_point_energy = 50;
	_attack_damage = 20;
	std::cout << "A new FragTrap !" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	_name = name;
	_point_health = 100;
	_point_energy = 100;
	_attack_damage = 30;
	std::cout << "A new FragTrap !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	_name = fragTrap.get_name();
	_point_health = fragTrap.get_point_health();
	_point_energy = fragTrap.get_point_energy();
	_attack_damage = fragTrap.get_attack_damage();
	std::cout << "A new FragTrap !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "We lost a FragTrap... " << std::endl;	
}

FragTrap&	FragTrap::operator=(const FragTrap& fragtrap)
{
	this->_name = fragtrap.get_name();
	this->_point_health = fragtrap.get_point_health();
	this->_point_energy = fragtrap.get_point_energy();
	this->_attack_damage = fragtrap.get_attack_damage();
	return (*this);
}

void	FragTrap::attack(const std::string& target) const
{
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void 	FragTrap::guardGate(void) const
{
	std::cout << "FragTrap " << _name << " is now in GateKeeper mode" << std::endl;
}