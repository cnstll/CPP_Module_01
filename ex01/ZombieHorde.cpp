#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *heapZombie;

	heapZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		heapZombie[i].setName( name );
	return (heapZombie);
}
