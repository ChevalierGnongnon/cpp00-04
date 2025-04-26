/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:17:47 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/19 16:18:24 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "default";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

void    WrongAnimal::makeSound() const{
    std::cout << "..." << std::endl;
}

const std::string &WrongAnimal::getType() const{
    return (this->type);
}