/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:22 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 13:09:35 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	this->type = " basic one ";
}

Weapon::Weapon(const std::string type){
	this->type = type;
}

Weapon::~Weapon(){
	std::cout << this->getType () << " has been destroyed." << std::endl;
}

std::string Weapon::getType(){
	return (this->type);
}

void Weapon::setType(const std::string type){
	this->type = type;
}
