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

		Zombie ( std::string name);
		~Zombie ();
		std::string getName( void );
		void	announce( void );

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
