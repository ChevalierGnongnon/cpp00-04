/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:45:41 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/18 14:55:12 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "The memory address of the string variable :" << &brain << std::endl;
	std::cout << "The memory address held by stringPTR :" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF :" << &stringREF << std::endl;

	std::cout << "The value of the string variable :" << brain << std::endl;
	std::cout << "The value pointed to by stringPTR :" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF :" << stringREF << std::endl;
}