/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:18:41 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/24 16:43:59 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
bool  handle_errors(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "Error in args !" << std::endl;
        return (true);
    }
    std::ifstream fs(av[1]);
    bool test;
    test = fs.is_open();
    if (test ==  false)
    {
        std::cout <<av[1] << " : Not Found !" << std::endl;
        return (true);
    }
    return (false);
    //to do 
}

int main (int ac, char *av[])
{
    if (handle_errors(ac , av) == true)
        return (1);
    std::ifstream fs(av[1]);
    strcat(av[1], ".replace");
    std::ofstream MyFile(av[1]);
}