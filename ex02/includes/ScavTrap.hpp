/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:55:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 12:21:07 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
	ScavTrap( void );
	ScavTrap( std::string );
	~ScavTrap( void );
	ScavTrap& operator=( const ScavTrap &s);
	ScavTrap(const ScavTrap& s);
	
	void	attack( const std::string &target );
	void	guardGate();
};