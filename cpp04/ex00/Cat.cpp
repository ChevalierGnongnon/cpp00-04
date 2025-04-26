/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:00:12 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 13:00:54 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src){
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

Cat::Cat(const Cat &src){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

void    Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}
