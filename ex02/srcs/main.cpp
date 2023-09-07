/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:43:44 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:48:06 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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