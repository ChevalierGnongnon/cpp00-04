/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:55:52 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 12:36:57 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;	
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src){
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src){
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

AMateria *Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}