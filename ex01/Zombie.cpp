#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

int	Zombie::_number = 0;

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << this->_index << " melted away" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce(void) {
	std::cout << Zombie::_name << Zombie::_index << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	Zombie::getNumber(void) {
	return (Zombie::_number);
}

Zombie::Zombie(void)
{
	this->_index = Zombie::_number;
	Zombie::_number++;
}
