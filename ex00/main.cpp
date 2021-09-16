/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:51:13 by calle             #+#    #+#             */
/*   Updated: 2021/09/16 17:00:41 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
	Zombie Bob = Zombie( "Bob" );
	Zombie *Polo = NULL;

	Bob.announce();

	randomChump( "Marco" );

	Polo = newZombie( "Polo" );
	Polo->announce();
	delete Polo;

	return (0);
}
