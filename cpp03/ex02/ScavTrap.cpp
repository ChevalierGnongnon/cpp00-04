/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:26:19 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 21:02:03 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = "default";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &otherOne){
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &otherOne){
		ClapTrap::operator=(otherOne);
	}
	return  (*this);
}

void	ScavTrap::attack(const std::string &target){
	std::cout << "-------- [ScavTrap attack] --------" << std::endl;
	if(this->hit_points <= 0){
		std::cout << "ScavTrap " << this->name << " is dead. He can't attack !" << std::endl;
		return ;
	}
	if (this->energy_points > 0){
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !" << std::endl;
		std::cout << "ScavTrap " << this->name << " has now " << this->energy_points << std::endl;
	}
	else
		std::cout << "Error ! ScavTrap " << this->name << " doesn't have anymore energy points and is laying on the ground !" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap [" << this->name << "] is now in Gate keeper mode." << std::endl;
}