/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:54:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/17 18:02:56 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) {
	std::cout << "[ FRAGTRAP ] " << name << " created" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap( void ) {
	std::cout << "[ FRAGTRAP ] " << this->_name << " destroyed" << std::endl;
	return ;
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
	std::cout << "[ FRAGTRAP ] " << this->_name << " make you a high fives" << std::endl;
	return ;
}