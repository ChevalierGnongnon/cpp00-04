/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:18:32 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 20:47:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &name){
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &otherOne){
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &otherOne){
		this->name = otherOne.name;
		this->hit_points = otherOne.hit_points;
		this->attack_damage = otherOne.attack_damage;
		this->energy_points = otherOne.energy_points;
	}
	return  (*this);
}

ClapTrap::ClapTrap(const ClapTrap &src){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}


ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	std::cout << "--------" << std::endl;
	if(this->hit_points <= 0){
		std::cout << "ClapTrap " << this->name << " is dead. He can't attack !" << std::endl;
		return ;
	}
	if (this->energy_points > 0){
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage !" << std::endl;
		std::cout << "ClapTrap " << this->name << " has now " << this->energy_points << std::endl;
	}
	else
		std::cout << "Error ! ClapTrap " << this->name << " doesn't have anymore energy points and is laying on the ground !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "--------" << std::endl;
	if (amount >= hit_points){
		std::cout << "Oh no ! Claptrap " << this->name << " is dead !" << std::endl;
		this->hit_points = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " has now " << this->hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "--------" << std::endl;
	if (this->energy_points == 0) {
		std::cout << "Error ! ClapTrap " << this->name << " doesn't have anymore energy points and is laying on the ground !" << std::endl;
		return ;
	}
	if (this->hit_points > 0) {
		energy_points--;
		this->hit_points += amount;
		
		std::cout << "ClapTrap " << this->name << " has now " << this->hit_points << std::endl;
		std::cout << "ClapTrap " << this->name << " has now " << this->energy_points << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->name << " is dead. He can't heal!" << std::endl;
	}
}

std::string ClapTrap::getName() const{
	return (this->name);
}

int			ClapTrap::getHitPoints() const{
	return (this->hit_points);
}
int			ClapTrap::getEnergyPoints() const{
	return (this->energy_points);
}
int			ClapTrap::getAttackDamage() const{
	return (this->attack_damage);
}

void	ClapTrap::set_attack_damage(unsigned int value){
	this->attack_damage = value;
}