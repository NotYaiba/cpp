/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 22:52:09 by yaiba             #+#    #+#             */
/*   Updated: 2021/10/18 17:51:16 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
   std::string line;
   Contact contact1;
    PhoneBook   phone;
    contact1.add("aa", "bb"  , "bb" , "bb");
    for (int i = 0 ; i < 8 ; i++)
    {
        
        phone.add(contact1);
        
    }
   while (1)
    {
        std::cin>>line;
       
    	if (!line.compare("exit"))
            break;
    	else if (!line.compare("add"))
            phone.add(get_params());
        else if (!line.compare("search"))
            phone.search();
    }
}