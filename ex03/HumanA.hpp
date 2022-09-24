#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA {

	public :

	HumanA(std::string name, Weapon & Weapon);
	~HumanA(void);
	void		attack(void);
	
	private :

	std::string	_name;
	Weapon &	_Weapon;
};

#endif
