/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:55:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:11:27 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
	ScavTrap( std::string );
	~ScavTrap( void );
	ScavTrap& operator=( const ScavTrap &s);
	void	attack( const std::string &target );
	void	guardGate();
};