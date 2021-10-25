/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:18:41 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/25 14:18:13 by melkarmi         ###   ########.fr       */
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
    std::string line;
    std::string ret;
    int start;

    std::string str;
    std::string s1;;
    std::string s2;
    size_t indx;
    std::cout << "start0" << std::endl;
    if (handle_errors(ac , av) == true)
        return (1);
    std::ifstream fs(av[1]);
    std::string newfile_name = av[1];
    newfile_name = newfile_name + ".replace";
    std::ofstream MyFile(newfile_name);
    s1 = av[2];
    s2 = av[3];
    std::cout << "start1" << std::endl;
        std::string content( (std::istreambuf_iterator<char>(fs) ),
                       (std::istreambuf_iterator<char>()    ) );
        str = "";
        start = 0;
        indx = content.find(s1, start);
        if (indx >= std::string::npos)
            str = content;  
        else
        {    
            while(indx != std::string::npos)
            {

                ret = content.substr(start,  indx - start);
                str = str + ret + s2;
                start = indx + s1.size();
                std::cout << indx << std::endl;
                indx = content.find(s1,start);
            }
            ret = content.substr(start,  content.size());
            str = str + ret;     
        }
        MyFile << str;
        
    // }
    MyFile.close();
}