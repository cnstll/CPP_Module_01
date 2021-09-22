/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:40:54 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:40:59 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon &weapon ) :
	_name( name ), _weapon( weapon )
{
}

HumanA::~HumanA (){}

void	HumanA::attack( void )
{
	std::cout << this->getName() << " attacks with ";
	std::cout << this->_weapon.getType() << std::endl;
}

void HumanA::_setName( std::string name )
{
	this->_name = name;
}

std::string HumanA::getName( void )
{
	return (this->_name);
}
