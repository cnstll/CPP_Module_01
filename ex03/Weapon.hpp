/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:43:24 by calle             #+#    #+#             */
/*   Updated: 2021/09/23 15:49:43 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const & getType( void );
		void	setType( std::string type);

	private:
		std::string	_type;
};

#endif
