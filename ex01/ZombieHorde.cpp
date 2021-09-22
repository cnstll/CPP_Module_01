/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:44:59 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:45:04 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *heapZombie;

	heapZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		heapZombie[i].setName( name );
	return (heapZombie);
}
