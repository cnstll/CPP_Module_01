#include "Karen.hpp"

int main( void )
{
	Karen	Karen;

	// HANDLING WRONG INPUT
	Karen.complain("BACON");
	Karen.complain("debug");

	// WORKING CALLS TO COMPLAIN
	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	return (0);
}
