/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:36:25 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/17 13:59:31 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	std::cout << "Zombie is destroyed." << std::endl;
}

std::string Zombie::getName(){
	return (this->name);
}

void Zombie::setName(const std::string input){
	this->name = input;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

