/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:04:05 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:35:23 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name) {
	std::cout << "[ DIAMONDTRAP ] " << name << " created" << std::endl;
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "[ DIAMONDTRAP ] " << this->_name << " destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& d)
{
	this->_name = d._name;
	this->_attack_damage = d._attack_damage;
	this->_energy_points = d._energy_points;
	this->_hit_points = d._hit_points;
	return *this;
}

void DiamondTrap::attack( const std::string &target) {
	ScavTrap::attack(target);
}