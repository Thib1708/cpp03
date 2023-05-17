/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:43:44 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/17 17:47:56 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap tibo("Tibo");
	ClapTrap elias("Elias");

	tibo.attack("Elias");
	elias.takeDamage(20);
	elias.beRepaired(10);
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
	return (0);
}