/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:41:10 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/25 15:34:16 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
void Karen::complain( std::string level )
{
    t_call dd[4] = {{"DEBUG", &Karen::debug}, {"INFO", &Karen::info}, {"WARNING", &Karen::warning}, {"ERROR", &Karen::error}};
	void		(Karen::*ptr)(void);   
    for (int i = 0; i < 4; ++i)
    {
        if (dd[i].cmd == level) {
            ptr = dd[i].f;
            (this->*ptr)();
            return ;
        }
    }
}

void Karen::debug( void )
{
       std::cout << "debug\n";

}
void Karen::info( void )
{
    std::cout << "info\n";

}
void Karen::warning( void )
{
    std::cout << "warning\n";
}
void Karen::error( void )
{
    std::cout << "error\n";
    
}
Karen::Karen()
{
    std::cout << "enter constructor\n";
    
}
Karen::~Karen()
{
    std::cout << "enter desconstructor\n";
    
}