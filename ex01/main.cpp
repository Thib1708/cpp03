/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:43:44 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:39:28 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap tibo("Tibo");
	ClapTrap elias("Elias");
	ScavTrap unknow("Lucas");
	ScavTrap lucas(unknow);
	ScavTrap leon;

	leon = ScavTrap("Leon");

	lucas.attack("Leon");
	leon.takeDamage(20);
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