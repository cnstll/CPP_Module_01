/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:42:43 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:42:49 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	public:
		HumanB( std::string const name );
		~HumanB();

		void	attack( void );

		std::string	getName( void );
		void	setWeapon( Weapon & weapon );


	private:
		std::string _name;
		Weapon *_weapon;

		void _setName( std::string name );
};
#endif
