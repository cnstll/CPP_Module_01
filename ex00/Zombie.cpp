/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:33:00 by calle             #+#    #+#             */
/*   Updated: 2021/09/16 17:00:34 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name): _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << getName() << ">"; 
	std::cout << " went back to the grave..." << std::endl;
}

std::string Zombie::getName( void )
{
	return (_name);
}

void Zombie::announce( void )
{
	std::cout << "<" << getName() << ">"; 
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
