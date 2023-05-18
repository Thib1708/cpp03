/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:48:14 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:35:23 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private :
		std::string	_name;
	public :
		DiamondTrap( std::string );
		~DiamondTrap( void );
		DiamondTrap& operator=( const DiamondTrap &d);
		void whoAmI( void );
		void	attack( const std::string &target );
};

#endif