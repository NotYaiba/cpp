/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:30:43 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/18 16:41:02 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

    void Contact::add(std::string first, std::string last, std::string nick, std::string ds)
    {
        Fname = first;
        Lname = last;
        Nname = nick;
        Ds = ds; 
    }
    void Contact::row_contact(int i)
    {
        std::cout << std::setw(10) << i   << "|";
        std::cout << std::setw(10) << Fname << "|";
        std::cout << std::setw(10) << Lname  << "|";
        std::cout << std::setw(10) << Nname;
        std::cout << std::endl;
    }
    void Contact::contact_details()
    {
        std::cout << std::setw(10) << Fname <<  std::endl;
        std::cout << std::setw(10) << Lname << std::endl;
        std::cout << std::setw(10) << Nname  << std::endl;
        std::cout << std::setw(10) << Ds << std::endl;
    }
Contact get_params()
{
    std::string fname;
    std::string lname;
    std::string nick;
    std::string ds;
    Contact tmp;

    std::cout << "First Name:  "  ;
    std::cin>>fname;
    std::cout << "Last Name:  "  ;
    std::cin>>lname;   
    std::cout << "NickName:  "  ;
    std::cin>>nick;    
    std::cout << "Your Darkest secrets:  "  ;
    std::cin>>ds;
    tmp.add(fname, lname, nick, ds);
    return (tmp);
}