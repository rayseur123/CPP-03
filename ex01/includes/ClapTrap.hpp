/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:05:26 by njooris           #+#    #+#             */
/*   Updated: 2026/01/13 10:28:49 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class	ClapTrap
{
	protected:
		std::string	_name;
		size_t		_point_health;
		size_t		_point_energy;
		size_t		_attack_damage;
		
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& claptrap);
		~ClapTrap(void);
		
		ClapTrap&	operator=(const ClapTrap& claptrap);

		const std::string&	get_name(void) const;
		const size_t&		get_point_health(void) const;
		const size_t&		get_point_energy(void) const;
		const size_t&		get_attack_damage(void) const;

		bool			can_do_something(void) const;
		virtual void	attack(const std::string& target) const;
		void			takeDamage(unsigned int& amount);
		void			beRepaired(unsigned int& amount);
};

#endif