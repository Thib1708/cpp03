/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:01:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/17 18:02:56 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "[ SCAVTRAP ] " << name << " created" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ SCAVTRAP ] " << this->_name << " destroyed" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string &target ) {
	if (this->_energy_points == 0)
	{
		std::cout << "[ SCAVTRAP ] " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "[ SCAVTRAP ] " << this->_name << " is dead, he can't attack" << std::endl;
		return ;
	}
	std::cout << "[ SCAVTRAP ] " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
	return ;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "[ SCAVTRAP ] " << this->_name << " activate guard gate" << std::endl;
	return ;
}