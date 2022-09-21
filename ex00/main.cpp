#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

void	randomChumpTest(void)
{
	std::string	name;

	std::cout << "Enter Zombie Name :\n";
	std::cin >> name;
	randomChump(name);
	std::cout << "\n\n\n";
}

Zombie	*newZombieTest(void)
{	
	Zombie		*Z;
	std::string	name;

	std::cout << "Enter Zombie Name :\n";
	std::cin >> name;
	Z = newZombie(name);
	return (Z);
}

void	DallasCity(Zombie* Cramberries)
{
	std::cout << "Welcome to DallasCity Fonction" << std::endl;
	Cramberries->announce();
	std::cout << "Oh god! The Cramberries made it to DallasCity! Run!" << std::endl;
}

int	main(void)
{
	std::string	nothing;

	std::cout << "A randomChump is created" << std::endl;
	randomChumpTest();
	std::cout << "Back to main fonction! type something to continue..." << std::endl;
	std::cin >> nothing;
	std::cout << "A newZombie is created" << std::endl;
	Zombie* Cramberries = newZombieTest();
	std::cout << "Back to main fonction! type something to continue..." << std::endl;
	std::cin >> nothing;
	Cramberries->announce();
	DallasCity(Cramberries);
	std::cout << "Back to main fonction! type something to continue..." << std::endl;
	std::cin >> nothing;
	delete Cramberries;
}
