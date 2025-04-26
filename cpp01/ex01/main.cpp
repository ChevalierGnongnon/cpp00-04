/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:14:01 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/18 12:57:34 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	std::string name;
	Zombie		*horde;
	int 		n;
	int			i;
	
	if (argc == 3){
		try {
			n = std::stoi(argv[1]);
		}
		catch (const std::invalid_argument&){
			std::cout << "Error : invalid argument(<number> <name>)." << std::endl;
			return (0);
		}
		catch (const std::out_of_range&){
			std::cout << "Error : number out of range." << std::endl;
			return (0);
		}
		name = argv[2];
		horde = zombieHorde(n, name);
		if (!horde)
			return (0);
		for (i = 0; i < n; i++)
			horde[i].announce();
		delete[] horde;
	}
	else
	{
		std::cout << "Error: arguments are invalid(<number> <name>)" << std::endl;
		return (0);
	}
}