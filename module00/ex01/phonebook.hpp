/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:25:25 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/18 17:35:33 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>

class Contact
{    
    std::string Fname;
    std::string Lname;
    std::string Nname;
    std::string Ds;
public: 
    void add(std::string first, std::string last, std::string nick, std::string ds);
    void row_contact(int i);
    void contact_details();
        
};

class PhoneBook
{
private:
    Contact Contacts[8];
    int     index;
    int     oldest;
    std::string input;
    
public:
    void add(Contact con);
    void print_contact(int i);
    void showColumns();
    int valid_index(std::string s);
    void search();
    
PhoneBook();
};
Contact get_params();
#endif
