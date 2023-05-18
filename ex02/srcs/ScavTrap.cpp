/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:01:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:34:58 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "[ SCAVTRAP ] " << name << " created" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ SCAVTRAP ] " << this->_name << " destroyed" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
        this->_name = s._name;
        this->_attack_damage = s._attack_damage;
        this->_energy_points = s._energy_points;
        this->_hit_points = s._hit_points;
        return *this;
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