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
