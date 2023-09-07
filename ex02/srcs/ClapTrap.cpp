/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:49:17 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "[ CLAPTRAP ] Constructor called" << std::endl;
	this->_name = "<null>";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ClapTrap::ClapTrap( std::string name) {
	std::cout << "[ CLAPTRAP ] " << name << " created" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
	this->setName(c.getName());
	this->setEnergy_Points(c.getEnergy_Points());
	this->setHit_Points(c.getHit_Points());
	this->setAttack_Damage(c.getAttack_Damage());
	std::cout << "[ CLAPTRAP ] " << c._name << " copied" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "[ CLAPTRAP ] " << this->_name << "'s destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	std::cout << "[ CLAPTRAP ] " << c._name << " assigned" << std::endl;
	this->_name = c.getName();
	this->_attack_damage = c.getAttack_Damage();
	this->_energy_points = c.getEnergy_Points();
	this->_hit_points = c.getHit_Points();
	return *this;
}

void	ClapTrap::attack( const std::string &target ) {
	if (this->_energy_points == 0)
	{
		std::cout << "[ CLAPTRAP ] " << this->_name << " has no more enregy points" << std::endl;
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
	std::cout << "[ CLAPTRAP ] " << this->_name << " get repaired, it know have " << this->_hit_points << " hit points" << std::endl;
	this->_energy_points--;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << "[ CLAPTRAP ] " << this->_name << " get attacked, it know have " << this->_hit_points << " hit points" << std::endl;
	this->_energy_points--;
	return ;
}

void	ClapTrap::setName( const std::string name ) {
	this->_name = name;
	return ;
}

void	ClapTrap::setHit_Points( const int hit_points ) {
	this->_hit_points = hit_points;
	return ;
}

void	ClapTrap::setEnergy_Points( const int energy_points ) {
	this->_energy_points = energy_points;
	return ;
}

void	ClapTrap::setAttack_Damage( const int attack_damage ) {
	this->_attack_damage = attack_damage;
	return ;
}

std::string ClapTrap::getName( void ) const {
	return (this->_name);
}

int	ClapTrap::getHit_Points( void) const {
	return (this->_hit_points);
}

int	ClapTrap::getEnergy_Points( void) const {
	return (this->_energy_points);
}

int	ClapTrap::getAttack_Damage( void) const {
	return (this->_attack_damage);
}