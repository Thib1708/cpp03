/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:53:26 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/07 11:01:42 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
	FragTrap( void );
	FragTrap( std::string );
	~FragTrap( void );
	FragTrap& operator=( const FragTrap &f );
	FragTrap(const FragTrap& s);
	
	void	attack( const std::string &target );
	void	highFivesGuys(void);
};