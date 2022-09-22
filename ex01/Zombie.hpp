#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

public :

	Zombie(void);
	~Zombie(void);
	void		announce(void);
	static int	getNumber(void);
	void		setName(std::string name);

private :
	
	static int	_number;
	int		_index;
	std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
