/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:54:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:50:04 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "[ FRAGTRAP ] created" << std::endl;
	this->_name = "<null>";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap( std::string name ) {
	std::cout << "[ FRAGTRAP ] " << name << " created" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap( void ) {
	std::cout << "[ FRAGTRAP ] " << this->_name << "'s destructor called" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& f)
{
	std::cout << "[ FRAGTRAP ] " << f._name << " assigned" << std::endl;
	this->_name = f._name;
	this->_attack_damage = f._attack_damage;
	this->_energy_points = f._energy_points;
	this->_hit_points = f._hit_points;
	return *this;
}

FragTrap::FragTrap(const FragTrap& f): ClapTrap(f)
{
	std::cout << "[ FRAGTRAP ] " << f._name << " copied" << std::endl;
}

void	FragTrap::attack( const std::string &target ) {
	if (this->_energy_points == 0)
	{
		std::cout << "[ FRAGTRAP ] " << this->_name << " has no more enregy points" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "[ FRAGTRAP ] " << this->_name << " is dead, he can't attack" << std::endl;
		return ;
	}
	std::cout << "[ FRAGTRAP ] " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
	return ;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "[ FRAGTRAP ] " << this->_name << " ask you a high fives" << std::endl;
	return ;
}