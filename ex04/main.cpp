/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:44:07 by calle             #+#    #+#             */
/*   Updated: 2021/12/14 13:05:22 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

bool file_exists (const std::string & filename)
{
	bool	exists;

    std::ifstream file(filename.c_str());
    exists = file.good();
	file.close();
	return (exists);
}

bool	check_arguments(char **args_to_check)
{
	if (*args_to_check[1] == 0 || *args_to_check[2] == 0 || *args_to_check[3] == 0)
	{
		std::cout << "ERROR: Empty string arguments." << std::endl;
		return(false);
	}
	if (!file_exists(args_to_check[1]))
	{
		std::cout << "ERROR: Provided file may not exist." << std::endl;
		return(false);
	}
	return(true);
}

void	replace(char *filename, std::string s1, std::string s2)
{
	std::string	outputFilename = ((std::string)filename).append(".replace");
	std::ifstream fileInput(filename);
	std::ofstream fileOutput(&outputFilename[0]);
	std::string	line;

	size_t	s1Len = s1.length();
	while(getline(fileInput, line))
	{
		size_t	pos = 0;
		while (line.find(s1, pos) != std::string::npos)
		{
			pos = line.find(s1, pos);
			line.erase(pos, s1Len);
			line.insert(pos, s2);
		}
		fileOutput << line << std::endl;
	}
	fileInput.close();
	fileOutput.close();
}

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		if (check_arguments(argv))
		{
			replace(argv[1], std::string(argv[2]), std::string(argv[3]));
			return (0);
		}
	}
	else
		std::cout << "ERROR: Too many or to few arguments." << std::endl;
	return (1);
}
