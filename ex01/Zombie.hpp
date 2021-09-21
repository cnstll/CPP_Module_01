/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:34:17 by calle             #+#    #+#             */
/*   Updated: 2021/09/16 17:00:32 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {

	private:

		std::string	_name;

	public:

		Zombie ();
		Zombie ( std::string name);
		~Zombie ();
		std::string getName( void );
		void	setName( std::string name );
		void	announce( void );

};

Zombie* zombieHorde( int N, std::string name );

#endif
