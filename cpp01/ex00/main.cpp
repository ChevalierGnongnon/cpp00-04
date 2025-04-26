/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:35:50 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/17 14:50:50 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = newZombie("Michel");
	Zombie *zombie2 = newZombie("George");
	Zombie *zombie3 = newZombie("Jean");
	Zombie *zombie4 = new Zombie();

	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	zombie4->announce();
	randomChump("Micheline");
	randomChump("Georgette");
	randomChump("Jeanette");
	randomChump("");
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;
}