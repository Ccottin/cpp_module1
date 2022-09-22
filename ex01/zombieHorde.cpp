#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	Zombie *Horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		Horde[i].setName(name);
		i++;
	}
	return (Horde);
}
