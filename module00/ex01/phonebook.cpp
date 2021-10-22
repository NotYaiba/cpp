/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:34:52 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/18 18:00:12 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index = -1;
	this->oldest = 0;
}
void PhoneBook::search()
{
    showColumns();
    for (int i = 0; i <= this->index ; i++)
    {
        this->Contacts[i].row_contact(i);
    }
    std::cout << "Enter index : " ;

    std::cin>>this->input;
    if (valid_index(this->input) == 1)
    {
        index = stoi(this->input);
        print_contact(index);
    }
    else
        std::cout << "Not a Valid Index" << std::endl;
    
}
int PhoneBook::valid_index(std::string s)
{
    for(int i = 0 ; s[i]; i++)
    {
        if (isdigit(s[i]) == 0)
            return (0);
    }
    return (1);
}
void PhoneBook::showColumns()
{
    std::cout << std::setw(10) << "Index"
        << "|";
    std::cout << std::setw(10) << "First Name"
        << "|";
    std::cout << std::setw(10) << "Last Name"
        << "|";
    std::cout << std::setw(10) << "NickName";
    std::cout << std::endl;
}
void PhoneBook::print_contact(int i)
{
    if (i <= this->index)
    {
        this->Contacts[i].contact_details();
    }
    else
        std::cout << "this index doesnt exit" << std::endl;
}

void PhoneBook::add(Contact con)
{
    int i;

    i = this->index;
    std::cout <<"index is " << i << std::endl;
    if (this->index == 7)
    {
        this->Contacts[0] = con;
    }
    else
    {
        this->index++;
        this->Contacts[i + 1] = con;
    }
    std::cout <<"afther index is " << this->index << std::endl;
    
}