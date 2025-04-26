/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:11:41 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 13:20:31 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

Dog::Dog(const Dog &src){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

void    Dog::makeSound() const{
    std::cout << "Woof" << std::endl;
}
