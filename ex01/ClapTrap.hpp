/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:49:03 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:13:26 by tgiraudo         ###   ########.fr       */
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
		ClapTrap &operator=( const ClapTrap &c);
		ClapTrap(const ClapTrap& c);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setName( const std::string );
		void setHit_Points( const int );
		void setEnergy_Points( const int );
		void setAttack_Damage( const int );
		
		std::string getName( void ) const;
		int getHit_Points( void ) const;
		int getEnergy_Points( void ) const;
		int getAttack_Damage( void ) const;
};

#endif