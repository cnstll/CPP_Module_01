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
