/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:53:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:38:17 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
	FragTrap( std::string );
	~FragTrap( void );
	FragTrap& operator=( const FragTrap &f );
	void	attack( const std::string &target );
	void	highFivesGuys(void);
};