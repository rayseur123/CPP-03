/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:29:47 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 13:58:52 by njooris          ###   ########.fr       */
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

FragTrap&	FragTrap::operator=(FragTrap& fragtrap)
{
	this->_name = fragtrap._name;
	this->_point_health = fragtrap._point_health;
	this->_point_energy = fragtrap._point_energy;
	this->_attack_damage = fragtrap._attack_damage;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (can_do_something())
		return ;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_point_energy--;
}

void 	FragTrap::highFivesGuys(void) const
{
	std::cout << "ScavTrap " << _name << " would like to high-five" << std::endl;
}