/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:20:33 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/21 18:48:53 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "default";
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src){
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

Animal::Animal(const Animal &src){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

void    Animal::makeSound() const{
    std::cout << "..." << std::endl;
}

const std::string &Animal::getType() const {
    return this->type;
}