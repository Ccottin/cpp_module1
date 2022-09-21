#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " melted away" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
