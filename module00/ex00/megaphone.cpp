/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:22:35 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/17 21:50:24 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char*av[])
{
    if (ac != 1)
    {
        for(int i = 1 ; i < ac ;i++)
        {
            for(int j = 0  ; av[i][j] ; j++)
                putchar(toupper(av[i][j]));
            if (i != ac - 1)
                putchar(' '); 
        }
        putchar('\n'); 
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}