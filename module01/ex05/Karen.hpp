#ifndef __karen_H__
#define __karen_H__

#include <iostream>



class Karen {
public:
   		Karen(void);
		~Karen(void); 
    void complain( std::string level );
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};


typedef	struct	s_call {
	std::string	cmd;
	void		(Karen::*f)();
}				t_call;

#endif