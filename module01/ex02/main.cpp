/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:26:22 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/23 20:42:41 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::cout << "program is running "<< std::endl;
    std::string s("HI THIS IS BRAIN");
    std::string *stringPTR = &s;
    std::string &stringREF = s;


    std::cout << "Display the address::" <<  std::endl;
    std::cout << "      address of the string  : "<< &s <<  std::endl;
    std::cout << "      address by the pointer : "<< stringPTR <<  std::endl;
    std::cout << "      address by the ref     : "<< &stringREF <<  std::endl;
     
    std::cout << "Display the string::" <<  std::endl;
    std::cout << "      string  by the pointer : "<< *stringPTR <<  std::endl;
    std::cout << "      string  by the ref     : "<< stringREF <<  std::endl;

    std::cout << "program exitng ! " <<  std::endl;

}