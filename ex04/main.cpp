#include <iostream>
#include <string>
#include <fstream>

std::string	change_occurences(std::string s1, std::string s2, std::string str)
{
	size_t	i;
	int	diff;

	i = 0;
	diff = s2.size() - s1.size();
	if (diff < 0)
		diff = 0;
	while (i != std::string::npos)
	{
		i = str.find(s1);
		str.erase(i, s2.size());
		str.reserve(diff);
		str.insert(i, s2);
		i++;
	}
	return (str);
}

void		open_stream(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	file(std::string filename, std::ifstream::out);
	std::ifstream	file2(std::string filename += ".replace", std::ifstream::in);
	std::string	str;

	if (file.good())
	{
		file >> str;
		change_occurences(s1, s2, str) >> file2;
	}	
	file.close();
	file2.close();
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!av[1] || !av[2] || !av[3])
		return (0);
	open_stream(av[1], av[2], av[3]);
}
