#include <iostream>
#include <iomanip>
#include <limits>
#include "Zombie.hpp"

void	NewYork(Zombie *Horde)
{
	int	i;
	int	n;

	std::cout << "\nSo we lived main fonction to come here, at NYCity, so we can finally";
	std::cout << " relax and enjoy thoses gorgerous pieces of pizza\n" << std::endl;
	i = 0;
	n = Horde->getNumber();
	while (i < n)
	{
		Horde[i].announce();
		i++;
	}
	std::cout << "The Horde is taking over New York! Noooooooooooo!\n";
}

int	main(void)
{
	std::string	name;

	std::cout << "Enter a Zombie Name :" << std::endl;
	std::cin >> name;
	Zombie *Horde = zombieHorde(42, name);
	Horde[0].announce();
	Horde->announce();
	NewYork(Horde);
	std::cout << "Back to main fonction! Type something to continue...";
	std::cin >> name;
	delete [] Horde;
}
