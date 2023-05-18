/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:53:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/18 11:35:23 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	public:
	FragTrap( std::string );
	FragTrap( void );
	~FragTrap( void );
	FragTrap& operator=( const FragTrap &f);
	void	attack( const std::string &target );
	void	highFivesGuys(void);
};