/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:19:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/13 14:57:36 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap Clap("Clappy");
	ClapTrap Trap("Trappy");
	
	Clap.set_attack_damage(2);
	Clap.attack("Trappy");
	Trap.takeDamage(2);
	Clap.attack("Trappy");
	Trap.takeDamage(2);
	Clap.set_attack_damage(10);
	Clap.attack("Trappy");
	Trap.takeDamage(10);
	Clap.beRepaired(6);
	Trap.attack("Clappy");
	Trap.beRepaired(6);

	ClapTrap Clap2("Clappou");
	ClapTrap Trap2("Trappou");

	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.beRepaired(6);
	Trap2.beRepaired(6);
	Clap2.attack("void");
	Trap2.attack("void");
}