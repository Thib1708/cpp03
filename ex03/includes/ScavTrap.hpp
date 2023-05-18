/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:55:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:35:23 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	public:
	ScavTrap( std::string );
	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap& operator=( const ScavTrap &s);
	void	attack( const std::string &target );
	void	guardGate();
};