/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:45:48 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:45:54 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(){}

Karen::~Karen(){}

void	Karen::debug( void ){ std::cout << DEBUG; }

void	Karen::info( void ){ std::cout << INFO; }

void	Karen::warning( void ){	std::cout << WARNING; }

void	Karen::error( void ){ std::cout << ERROR; }

Karen::e_logLevel	Karen::resolveLog( std::string level )
{
	if (level == "DEBUG") return (e_debug);
	if (level == "INFO") return (e_info);
	if (level == "WARNING") return (e_warning);
	if (level == "ERROR") return (e_error);
	return (e_filter);
}

void	Karen::doComplaints( int logLevel)
{
	void    ( Karen::*pointerToMembFunc[5] )( void ) = { 
				&Karen::debug,
				&Karen::info,
				&Karen::warning,
				&Karen::error, 
				0
			};
	std::string karenErrors[5] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	while (logLevel < 4)
	{
		std::cout << "[" << karenErrors[logLevel] << "]" << std::endl;
		(this->*pointerToMembFunc[logLevel])();
		std::cout << std::endl;
		logLevel++;
	}
}

void	Karen::filterComplaints( std::string level )
{
	switch (resolveLog(level))
	{
		case e_debug: {
			doComplaints(e_debug);
			break;
		}
		case e_info: {
			doComplaints(e_info);
    	    break;
    	}
		case e_warning: {
			doComplaints(e_warning);
    	    break;
    	}
		case e_error: {
			doComplaints(e_error);
    	    break;
    	}
    	default: {
			std::cout << FILTERED;
			break;
		}
    }
}

