/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:51:13 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:46:25 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void	zombieRiseUp(int numOfZombies, std::string name)
{
	std::cout << "Rise up Horde!!!" << std::endl;
	std::cout << "*** " <<  numOfZombies;
	std::cout << " zombies named " << name; 
	std::cout << " are getting out of the ground ***" << std::endl;
}

int main ( void )
{
	Zombie *Horde = NULL;
	int		numOfZombies = 5;
	std::string	name = "Thrall";
	
	zombieRiseUp(numOfZombies, name);
	Horde = zombieHorde( numOfZombies, name );
	for (int i = 0; i < numOfZombies; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}
