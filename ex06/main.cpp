/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:46:15 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:46:20 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main( int argc, char *argv[] )
{
	Karen	Karen;

	if (argc == 2) 
		Karen.filterComplaints(argv[1]);
	else
		std::cout << ARG_ERROR;
	return (0);
}
