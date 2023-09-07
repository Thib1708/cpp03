/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:01:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:38:30 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "[ SCAVTRAP ] created" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "[ SCAVTRAP ] " << name << " created" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ SCAVTRAP ] " << this->_name << "'s destructor called" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
	std::cout << "[ SCAVTRAP ] " << s._name << " assigned" << std::endl;
	this->_name = s._name;
	this->_attack_damage = s._attack_damage;
	this->_energy_points = s._energy_points;
	this->_hit_points = s._hit_points;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& s): ClapTrap(s)
{
	std::cout << "[ SCAVTRAP ] " << s._name << " copied" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {
	if (this->_energy_points == 0)
	{
		std::cout << "[ SCAVTRAP ] " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "[ SCAVTRAP ] " << this->_name << " is dead" << std::endl;
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
