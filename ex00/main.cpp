/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:43:44 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/17 14:46:18 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap mechant("mechant");
	ClapTrap gentil("gentil");
	
	mechant.attack("gentil");
	gentil.takeDamage(0);
	gentil.beRepaired(1);
	return (0);
}