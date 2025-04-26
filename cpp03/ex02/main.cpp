/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:13:14 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/18 14:21:05 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
	FragTrap fraggy("Fraggy");
	FragTrap fraggou("Fraggou");
	FragTrap fraggus;
	FragTrap test(fraggou);
	FragTrap a = fraggy;


	std::cout << "<------------[Name getters tests]------------>" << std::endl;
	std::cout << "[Name]" << fraggy.getName() << std::endl;
	std::cout << "[Name]" << fraggou.getName() << std::endl;
	std::cout << "[Name]" << fraggus.getName() << std::endl;
	std::cout << "[Name]" << test.getName() << std::endl;
	std::cout << "[Name]" << a.getName() << std::endl;

	std::cout << std::endl;
	
	std::cout << "<------------[Attack damage getters tests]------------>" << std::endl;
	std::cout << "["<< fraggy.getName() << "]" << fraggy.getAttackDamage() << std::endl;
	std::cout << "["<< fraggou.getName() << "]"  << fraggou.getAttackDamage() << std::endl;
	std::cout << "["<< fraggus.getName() << "]"  << fraggus.getAttackDamage() << std::endl;
	std::cout << "["<< test.getName() << "]"  << test.getAttackDamage() << std::endl;
	std::cout << "["<< a.getName() << "]"  << a.getAttackDamage() << std::endl;

	std::cout << std::endl;
	
	std::cout << "<------------[Energy points getters tests]------------>" << std::endl;
	std::cout << "["<< fraggy.getName() << "]" << fraggy.getEnergyPoints() << std::endl;
	std::cout << "["<< fraggou.getName() << "]"  << fraggou.getEnergyPoints() << std::endl;
	std::cout << "["<< fraggus.getName() << "]"  << fraggus.getEnergyPoints() << std::endl;
	std::cout << "["<< test.getName() << "]"  << test.getEnergyPoints() << std::endl;
	std::cout << "["<< a.getName() << "]"  << a.getEnergyPoints() << std::endl;

	std::cout << std::endl;
	
	std::cout << "<------------[Hit points getters tests]------------>" << std::endl;
	std::cout << "["<< fraggy.getName() << "]" << fraggy.getHitPoints() << std::endl;
	std::cout << "["<< fraggou.getName() << "]"  << fraggou.getHitPoints() << std::endl;
	std::cout << "["<< fraggus.getName() << "]"  << fraggus.getHitPoints() << std::endl;
	std::cout << "["<< test.getName() << "]"  << test.getHitPoints() << std::endl;
	std::cout << "["<< a.getName() << "]"  << a.getHitPoints() << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "<------------[attack tests]------------>" << std::endl;
	std::cout << "["<< fraggy.getName() << "]";
	fraggy.attack("target1");
	
	std::cout << std::endl;
	
	std::cout << "["<< fraggou.getName() << "]";
	fraggou.attack("target2");

	std::cout << std::endl;
	
	std::cout << "["<< fraggus.getName() << "]";
	fraggus.attack("target3");
	
	std::cout << std::endl;
	
	std::cout << "["<< test.getName() << "]";
	test.attack("target4");

	std::cout << std::endl;
	
	std::cout << "["<< a.getName() << "]";
	a.attack("target5");

	std::cout << std::endl;

	std::cout << "<------------[beRepaired tests]------------>" << std::endl;
	std::cout << "["<< fraggy.getName() << "]";
	fraggy.beRepaired(2);
	
	std::cout << std::endl;
	
	std::cout << "["<< fraggou.getName() << "]";
	fraggou.beRepaired(2);

	std::cout << std::endl;
	
	std::cout << "["<< fraggus.getName() << "]";
	fraggus.beRepaired(2);
	
	std::cout << std::endl;
	
	std::cout << "["<< test.getName() << "]";
	test.beRepaired(2);

	std::cout << std::endl;
	
	std::cout << "["<< a.getName() << "]";
	a.beRepaired(2);

	std::cout << std::endl;

	std::cout << "<------------[highfive test]------------>" << std::endl;
	
	std::cout << "["<< fraggy.getName() << "]";
	fraggy.highFiveGuys();
	
	std::cout << std::endl;
	
	std::cout << "["<< fraggou.getName() << "]";
	fraggou.highFiveGuys();

	std::cout << std::endl;
	
	std::cout << "["<< fraggus.getName() << "]";
	fraggus.highFiveGuys();
	
	std::cout << std::endl;
	
	std::cout << "["<< test.getName() << "]";
	test.highFiveGuys();

	std::cout << std::endl;
	
	std::cout << "["<< a.getName() << "]";
	a.highFiveGuys();

	std::cout << std::endl;
}