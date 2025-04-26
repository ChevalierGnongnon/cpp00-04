/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:57:43 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 20:55:36 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "default";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &otherOne){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &otherOne){
		ClapTrap::operator=(otherOne);
	}
	return  (*this);
}

void	FragTrap::attack(const std::string &target){
	std::cout << "-------- [FragTrap attack] --------" << std::endl;
	if(this->hit_points <= 0){
		std::cout << "FragTrap " << this->name << " is dead. He can't attack !" << std::endl;
		return ;
	}
	if (this->energy_points > 0){
		this->energy_points--;
		std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !" << std::endl;
		std::cout << "FragTrap " << this->name << " has now " << this->energy_points << std::endl;
	}
	else
		std::cout << "Error ! FragTrap " << this->name << " doesn't have anymore energy points and is laying on the ground !" << std::endl;
}
void	FragTrap::highFiveGuys(void){
	std::cout << "FragTrap [" << this->name << "] I request the highest of fives !" << std::endl;
}
