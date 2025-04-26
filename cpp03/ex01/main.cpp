/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:19:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/18 12:38:35 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap trappix("a");
	ScavTrap trappax;
	

	std::cout << "<-------------members function called------------->" << std::endl;
	std::cout << "Name: " << trappix.getName() << ", HP : " << trappix.getHitPoints() << " damage: " << trappix.getAttackDamage() << ", EP: " << trappix.getEnergyPoints() << std::endl;
	std::cout << "Name: " << trappax.getName() << ", HP : " << trappax.getHitPoints() << " damage: " << trappax.getAttackDamage() << ", EP: " << trappax.getEnergyPoints() << std::endl;
	trappix.attack("trappax");
	trappax.attack("other one");
	trappax.takeDamage(10);
	trappax.beRepaired(2);
	trappax.guardGate();
	
	std::cout << "<-------------tests copy constructor------------->" << std::endl;
	ScavTrap copyTrap("copy");
	std::cout << "Name: " << copyTrap.getName() << ", HP: " << copyTrap.getHitPoints() << ", EP: " << copyTrap.getEnergyPoints() << ", Damage: " << copyTrap.getAttackDamage() << std::endl;
	copyTrap.attack("other one");
	copyTrap.takeDamage(10);
	copyTrap.beRepaired(2);
	copyTrap.guardGate();
	
	std::cout << "<-------------copy assignment operator test------------->" << std::endl;
	ScavTrap assignedTrap;
	
    assignedTrap = copyTrap;
    std::cout << "Name: " << assignedTrap.getName() << ", HP: " << assignedTrap.getHitPoints() << ", EP: " << assignedTrap.getEnergyPoints() << ", Damage: " << assignedTrap.getAttackDamage() << std::endl;
	assignedTrap.attack("other one");
	assignedTrap.takeDamage(10);
	assignedTrap.beRepaired(2);
	assignedTrap.guardGate();
}