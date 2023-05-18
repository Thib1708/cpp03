/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:34:58 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "[ CLAPTRAP ] " << name << " created" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ClapTrap::ClapTrap( void ) {
	std::cout << "[ CLAPTRAP ] created" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "[ CLAPTRAP ] " << this->_name << " destroyed" << std::endl;
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
		std::cout << "[ CLAPTRAP ] " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "[ CLAPTRAP ] " << this->_name << " is dead, he can't attack" << std::endl;
		return ;
	}
	std::cout << "[ CLAPTRAP ] " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energy_points == 0)
	{
		std::cout << "[ CLAPTRAP ] " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "[ CLAPTRAP ] " << this->_name << " get repaired, he know have " << this->_hit_points << " hit points" << std::endl;
	this->_energy_points--;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->_hit_points -= amount;
	if (this->_hit_points >= 0)
		std::cout << "[ CLAPTRAP ] " << this->_name << " get attacked, he know have " << this->_hit_points << " hit points" << std::endl;
	else 
	{
		this->_hit_points = 0;
		std::cout << "[ CLAPTRAP ] " << this->_name << " get attacked, he know have " << this->_hit_points << " hit points" << std::endl;
	}
	this->_energy_points--;
	return ;
}