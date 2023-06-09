/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:43:44 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:35:23 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main( void )
{
	FragTrap greg("Gregouze");
	ScavTrap tibo("Tibo");
	ClapTrap elias("Elias");

	tibo.attack("Elias");
	elias.takeDamage(20);
	elias.beRepaired(10);
	greg.attack("Tibo");
	tibo.takeDamage(30);
	tibo.attack("Elias");
	elias.takeDamage(20);
	tibo.attack("Elias");
	elias.takeDamage(20);
	tibo.guardGate();
	tibo.attack("Elias");
	elias.takeDamage(20);
	elias.attack("Tibo");
	elias.beRepaired(10);
	elias.attack("Tibo");
	greg.highFivesGuys();
	return (0);
}