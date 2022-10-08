/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:58:18 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 20:14:17 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <ios>
#include <cstdlib>

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
		if (i == std::string::npos)
			break ; 
		str.erase(i, s1.size());
		str.reserve(diff);
		str.insert(i, s2);
		i++;
	}
	return (str);
}

std::string	get_filename(std::string name)
{
	return (name += ".replace");
}

void		open_stream(std::string filename, std::string s1, std::string s2)
{
	std::string	str = get_filename(filename);
	std::ifstream	file;
	std::ofstream	file2;	
	char		*cstr;

	cstr = new char[filename.length() + 1];
	std::strcpy(cstr, filename.c_str());
	file.open(cstr);
	if (!file.is_open())
	{
		std::cout << "File opening problem" << std::endl;
		exit(1);
	}
	delete [] cstr;
	cstr = new char[str.length() + 1];
	std::strcpy(cstr, str.c_str());
	file2.open(cstr);
	delete [] cstr;
	while (file.good() && file2.good())
	{
		std::getline(file, str);
		str = change_occurences(s1, s2, str);
		cstr = new char[str.length() + 1];
		std::strcpy(cstr, str.c_str());
		file2.write(cstr, str.size());
		file2 << std::endl;
		delete [] cstr;
	}	
	file.close();
	file2.close();
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!av[1] || !av[2] || !av[3])
	{
		std::cout << "Invalid program input" << std::endl;
		return (0);
	open_stream(av[1], av[2], av[3]);
	return (0);
}
