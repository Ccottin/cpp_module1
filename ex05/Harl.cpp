#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(void) { } 

Harl::~Harl(void) { }
	
void	Harl::complain(std::string level) {
}

void	Harl::_debug(void) {
	std::cout << "Harl just enjoy to complain, for the good sake of complaining, that's right!" << std::endl;
}

void	 Harl::_info(void) {
	std::cout << "Harl loves complaining, bt y'know, sometimes you better pay attention to what he says, that could "
		"be important y'know" << std::endl;
}

void	Harl::_warning(void) {
	std::cout << "Oh Jeez Oh Jeez! What did I said about listening to Harl complain? Shits are getting serious"
	"y'know?" << std::endl;
}

void	Harl::_error(void) {
	std::cout << "Alright that's it! I quit! and I quit for good! What's that? What do you mean by I cannot be free?"
		" Y'know I can always make this computer crash right?" << std::endl;
}
