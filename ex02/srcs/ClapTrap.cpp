/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:46:12 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 13:37:17 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("default"), _point_health(10), _point_energy(10), _attack_damage(0)
{
	std::cout << "A new ClapTrap !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _point_health(10), _point_energy(10), _attack_damage(0)
{
	std::cout << "A new ClapTrap !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "We lost a ClapTrap... " << std::endl;
}

const std::string&	ClapTrap::get_name() const
{
	return (_name);
}

const size_t&		ClapTrap::get_point_health() const
{
	return (_point_health);
}

const size_t&		ClapTrap::get_point_energy() const
{
	return (_point_energy);
}

const size_t&		ClapTrap::get_attack_damage() const
{
	return (_attack_damage);
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	this->_name = claptrap._name;
	this->_point_health = claptrap._point_health;
	this->_point_energy = claptrap._point_energy;
	this->_attack_damage = claptrap._attack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	this->_name = claptrap._name;
	this->_point_health = claptrap._point_health;
	this->_point_energy = claptrap._point_energy;
	this->_attack_damage = claptrap._attack_damage;
	return (*this);
}

bool	ClapTrap::can_take_damage(void) const
{
	if (!_point_health)
	{
		std::cout << "ClapTrap "<< _name << " say : I cant move..." << std::endl;
		return (1);
	}
	return (0);
}

bool	ClapTrap::can_do_something(void) const
{
	if (!_point_energy)
	{
		std::cout << "ClapTrap " << _name << " say : I am tired..." << std::endl;
		return (1);
	}
	return (0);
}

void	ClapTrap::attack(const std::string& target) const
{
	if (can_do_something())
		return ;
	std::cout << "CalpTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (can_take_damage())
		return ;
	if ((this->_point_health - amount) < 0)
	{
		this->_point_health = 0;
	}
	else
	{
		this->_point_health -= amount;
	}
	std::cout << "CalpTrap " << _name << " take damages and lose " << amount << "points of health" << std::endl;
	_point_energy--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (can_do_something())
		return ;
	if ((this->_point_health + amount) > 10)
	{
		this->_point_health = 10;
	}
	else
	{
		this->_point_health += amount;
	}
	std::cout << "CalpTrap " << _name << " repared it self and regain " << amount << "points of health" << std::endl;
	_point_energy--;
}
