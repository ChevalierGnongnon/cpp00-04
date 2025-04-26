/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:51:11 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 14:41:08 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
}

Character::~Character(){
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &src) : name(src.name) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character::Character(const std::string &name) : name(name) {
	std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &src){
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &src){
		for (int i = 0; i < 4; i++){
			if (inventory[i])
				delete inventory[i];
			if (src.inventory[i])
				inventory[i] = src.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

const std::string &Character::getName() const{
	return (this->name);
}

void	Character::equip(AMateria *m){
	int i = 0;

	if (m != NULL){
		while (i < 4 && inventory[i] != NULL){
			i++;
		}
		if (i == 4){
			return ;
		}
		inventory[i] = m;
	}
}

void Character::unequip(int idx){
	if (idx < 0 || idx >= 4){
		return ;
	}
	std::cout << this->getName() << "has unequiped materia at space " << idx << std::endl;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx >= 4){
		return ;
	}
	if (this->inventory[idx] == NULL){
		return ;
	}
	this->inventory[idx]->use(target);
}

AMateria* Character::getMateria(int idx) const {
	if (idx < 0 || idx >= 4)
		return NULL;
	return this->inventory[idx];
}