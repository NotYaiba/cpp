/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaiba <yaiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:18:41 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/25 11:14:17 by yaiba            ###   ########.fr       */
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
    std::string s1 = "ss";
    std::string s2 = "kk";
    size_t indx;

    if (handle_errors(ac , av) == true)
        return (1);
    std::ifstream fs(av[1]);
    std::string newfile_name = av[1];
    newfile_name = newfile_name + ".replace";
    std::ofstream MyFile(newfile_name);
    s1 = av[2];
    s2 = av[3];
    while (std::getline(fs, line))  
    {

    
        
        str = "";
        start = 0;
        size_t indx = line.find(s1, start);
        if (indx >= std::string::npos)
            str = line;  
        else
        {    
            while(indx != std::string::npos)
            {
                ret = line.substr(start,  indx - start);
                str = str + ret;
                start = indx + s2.size();
                str.insert(indx, s2);
                indx = line.find(s1,indx+1);

            }
            ret = line.substr(start,  line.size());
            str = str + ret;     

        }   
        str = str + "\n";
        MyFile << str;
        
    }
    MyFile.close();
}