/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:00:12 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 17:04:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->Cells = new Brain();
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->Cells;
}

Cat &Cat::operator=(const Cat &src){
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &src){
        this->type = src.type;
        delete this->Cells;
        this->Cells = new Brain(*src.Cells);
    }
    return (*this);
}

Cat::Cat(const Cat &src){
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = src.type;
    this->Cells = new Brain(*src.Cells);
}

void    Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea) {
	this->Cells->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
	return (this->Cells->getIdea(index));
}