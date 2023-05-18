/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:08:22 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name) {
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_attack_damage = 0;
	this->_energy_points = 10;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	this->_name = c._name;
	this->_attack_damage = c._attack_damage;
	this->_energy_points = c._energy_points;
	this->_hit_points = c._hit_points;
	return *this;
}

void	ClapTrap::attack( const std::string &target ) {
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " get repaired, it know have " << this->_hit_points << " hit points" << std::endl;
	this->_energy_points--;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " get attacked, it know have " << this->_hit_points << " hit points" << std::endl;
	this->_energy_points--;
	return ;
}