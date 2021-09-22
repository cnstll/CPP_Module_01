/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:41:13 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:41:19 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA();

		void	attack( void );

		std::string	getName( void );


	private:
		std::string _name;
		Weapon &_weapon;

		void _setName( std::string const name );
};
#endif
