#include <string>

class	Harl	{

	public :

	Harl(void);
	~Harl(void);
	void	complain(std::string level, std::string filter);

	private :

	void	_filtered_Harl(void (Harl::*tab[4])(void), 
			std::string tab2[4], int i, std::string level);
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};
