#include "Karen.hpp"
#include <iostream>

Karen::Karen(){}

Karen::~Karen(){}

void	Karen::debug( void )
{
	std::cout << DEBUG;
}

void	Karen::info( void )
{
	std::cout << INFO;
}

void	Karen::warning( void )
{
	std::cout << WARNING;
}

void	Karen::error( void )
{
	std::cout << ERROR;
}

void	Karen::complain( std::string level )
{
	void    ( Karen::*pointerToMembFunc[5] )( void ) = { &Karen::debug,
				&Karen::info, &Karen::warning, &Karen::error, 0 };
	std::string karenErrors[5] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	int	selector = 0;

	while (!karenErrors[selector].empty() && karenErrors[selector].compare(level))
		selector++;
	if (selector == 4)
		std::cout << INPUT_ERROR;
	else
		(this->*pointerToMembFunc[selector])();
}
