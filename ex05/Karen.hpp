
#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# define DEBUG "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n"
# define INFO "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it. \n"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n"
# define ERROR "This is unacceptable, I want to speak to the manager now.\n"
# define INPUT_ERROR "I don't eat this kind of bacon! You can tell that to your manager. -- Wrong Input\n"

class Karen {

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Karen();
		~Karen();
		void complain( std::string level );
};

#endif
