/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:23:17 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 13:57:46 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria default constructor called" << std::endl;
    this->_type = "default";
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type){
    std::cout << "AMateria constructor called" << std::endl;
    this->_type = type;
}

AMateria::AMateria(const AMateria &src){
    std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src){
    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &src){
		//Type is not copied here according to the subject...
    }
    return (*this);
}

const std::string &AMateria::getType() const{
    return (this->_type);
}

void AMateria::use(ICharacter &target) {
    std::cout << "* uses a generic materia on " << target.getName() << " *" << std::endl;
}
