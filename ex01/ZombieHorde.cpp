/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:44:59 by calle             #+#    #+#             */
/*   Updated: 2021/12/14 11:03:42 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *heapZombies;

	heapZombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		heapZombies[i].setName( name );
	return (heapZombies);
}
