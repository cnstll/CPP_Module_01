//Make a Weapon class, that has a type string, and a getType method that returns a
//const reference to this string. It also has a setType, of course!
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const &getType( void );
		void	setType( std::string type);

	private:
		std::string	_type;
};

#endif
