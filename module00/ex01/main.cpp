/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaiba <yaiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 22:52:09 by yaiba             #+#    #+#             */
/*   Updated: 2021/10/18 14:01:06 by yaiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <iomanip>


class Contact
{    
    std::string Fname;
    std::string Lname;
    std::string Nname;
    std::string Ds;
public:
   
    void add(std::string first, std::string last, std::string nick, std::string ds)
    {
        Fname = first;
        Lname = last;
        Nname = nick;
        Ds = ds; 
    }
    void print_contact(void)
    {
 
	std::cout << std::setw(10) << Fname
		 << "|";
	std::cout << std::setw(10) << Lname
		 << "|";
	std::cout << std::setw(10) << Nname
         << "|";
	std::cout << std::setw(10) << Ds;
	std::cout << std::endl;
    }
};

class PhoneBook
{
private:
    
public:
    Contact Contacts[8];
    int     index;
    int     size;
    void add(Contact con){
        
        std::cout << "index is " << this->index << std::endl;
        if (this->index == 8)
            this->index = 0;
        this->Contacts[this->index] = con;
        this->index++;
    }
    void get_contact(int i){
        
        if (i <= this->index)
        {
             this->Contacts[i].print_contact();
        }
        else
            std::cout << "this index doesnt exit" << std::endl;
    }
    void showColumns()
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
    void search()
    {
        showColumns();
        for (int i = 0; i <= this->index; i++)
        {
            this->Contacts[i].print_contact();
        }
        
        
    }
PhoneBook()
{
	this->index = 0;
	this->size = 0;
}
};

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

int main()
{
   std::string line;
   Contact contact1;
PhoneBook   phone;
   
   
   while (1)
    {
        std::cin>>line;
        
    	if (!line.compare("exit"))
            break;
    	else if (!line.compare("add"))
            phone.add(get_params());
        else if (!line.compare("search"))
        {
            phone.search();
        } 
    }

}