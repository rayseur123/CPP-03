/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:47:50 by njooris           #+#    #+#             */
/*   Updated: 2025/12/19 11:43:51 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	tom("Tom");
	ClapTrap	lucas("Lucas");

	lucas.attack("Tom");
	tom.attack("Lucas");

	lucas.beRepaired(1);
	tom.beRepaired(1);
	
	lucas.takeDamage(5);
	tom.takeDamage(5);
	
	return (0);
}