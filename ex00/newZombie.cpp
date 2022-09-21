#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)	{
	
	Zombie* Z = new Zombie(name);
	return (Z);
}
