/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:05:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/19 09:06:42 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Harl has been created" << std::endl;
}

Harl::~Harl(){
	std::cout << "Harl has been FINALLY destroyed." << std::endl;
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl; 
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now !" << std::endl;
}

void	Harl::complain(std::string level){
	const std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*functptrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;

	for (i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*functptrs[i])();
			return ;
		}
	}
	std::cout << "WHAT ARE YOU TRYING TO DO ??? I'M CALLING THE POLICE !!!" << std::endl;
}

