/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:43:44 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 11:27:00 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap1("clap1");
	ClapTrap clap2;
	
	clap2 = ClapTrap("clap2");
	ClapTrap clap3(clap1);
	
	clap1.attack("clap2");
	clap2.takeDamage(0);
	clap2.beRepaired(1);
	return (0);
}