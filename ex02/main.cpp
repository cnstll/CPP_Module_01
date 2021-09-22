/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:48:49 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:48:51 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string address with &string: " << &string << std::endl;
	std::cout << "string address with stringPTR: " << stringPTR << std::endl;
	std::cout << "string address with stringREF: " << &stringREF << std::endl;
	std::cout << "string value with stringPTR: " << *stringPTR << std::endl;
	std::cout << "string value with stringREF: " << stringREF << std::endl;
	return (0);
}
