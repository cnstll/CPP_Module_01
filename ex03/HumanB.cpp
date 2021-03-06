/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:41:32 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:42:34 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string const name) 
{
	this->_setName(name);
};

HumanB::~HumanB (){};

void	HumanB::attack( void )
{
	std::cout << this->getName() << " attacks with ";
	if (!this->_weapon) 
		std::cout << "his bare hands -- no weapon equiped" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}

void HumanB::_setName( std::string name )
{
	this->_name = name;
}

void HumanB::setWeapon( Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string HumanB::getName( void )
{
	return (this->_name);
}
