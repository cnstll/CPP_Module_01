/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:45:24 by calle             #+#    #+#             */
/*   Updated: 2021/12/14 13:20:51 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void )
{
	Karen	Karen;

	// HANDLING WRONG INPUT
	//Karen.complain("BACON");
	//Karen.complain("debug");

	// WORKING CALLS TO COMPLAIN
	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	return (0);
}
