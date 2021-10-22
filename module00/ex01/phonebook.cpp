/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:34:52 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/22 14:34:55 by melkarmi         ###   ########.fr       */
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
    int ind;
    showColumns();
 
    for (int i = 0; i <= this->index ; i++)
    {
        this->Contacts[i].row_contact(i);
    }
    if (this->index == 0)
        std::cout << std::setw(30) << "------No Contacts-----"  << std::endl;
    std::cout << "Enter index (Enter b to go back) : " ;

    std::cin>>this->input;
    if (!this->input.compare("b"))
        return ;
    if (valid_index(this->input) == 1)
    {
        ind = stoi(this->input);
        print_contact(ind );
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
    if (this->index == 7)
    {
        this->Contacts[this->oldest] = con;
        if (this->oldest == 7)
            this->oldest = 0;
        else
            this->oldest++;
    }
    else
    {
        this->index++;
        this->Contacts[i + 1] = con;
    }
     std::cout << "Your contact has been added." <<  std::endl;
}