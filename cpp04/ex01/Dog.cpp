/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:11:41 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 17:06:23 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->Cells = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->Cells;
}

Dog &Dog::operator=(const Dog &src){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &src){
        this->type = src.type;
        delete this->Cells;
        this->Cells = new Brain(*src.Cells);
    }
    return (*this);
}

Dog::Dog(const Dog &src){
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = src.type;
    this->Cells = new Brain(*src.Cells);
}

void    Dog::makeSound() const{
    std::cout << "Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea) {
	this->Cells->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const{
	return (this->Cells->getIdea(index));
}