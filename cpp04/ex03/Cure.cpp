/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:35:08 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 13:49:05 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor called" << std::endl;	
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src){
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src){
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

AMateria *Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}