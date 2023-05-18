/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:49:03 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:39:04 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected :
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
	public :
		ClapTrap( void );
		ClapTrap( std::string );
		~ClapTrap( void );
		ClapTrap& operator=( const ClapTrap &c );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif