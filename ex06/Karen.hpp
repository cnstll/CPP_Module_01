/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:46:02 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 20:46:07 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# define DEBUG "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n"
# define INFO "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it. \n"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n"
# define ERROR "This is unacceptable, I want to speak to the manager now.\n"
# define INPUT_ERROR "I don't eat this kind of bacon! You can tell that to your manager." // --WRONG INPUT
# define ARG_ERROR "** Karen is angry, she does not like what you are cooking **\n" // --INPUT_ARG_ERROR
# define FILTERED "[ Probably complaining about insignificant problems ]\n"


class Karen {

	private:
		enum e_logLevel {
					    e_debug,
					    e_info,
					    e_warning,
					    e_error,
						e_filter,
					};
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void doComplaints( int logLevel );
		e_logLevel resolveLog( std::string level );

	public:
		Karen();
		~Karen();
		void filterComplaints( std::string level );
};
#endif
