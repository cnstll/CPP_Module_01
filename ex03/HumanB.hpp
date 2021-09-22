#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	public:
		HumanB( std::string const name );
		~HumanB();

		void	attack( void );

		std::string	getName( void );
		void	setWeapon( Weapon & weapon );


	private:
		std::string _name;
		Weapon *_weapon;

		void _setName( std::string name );
};
#endif
