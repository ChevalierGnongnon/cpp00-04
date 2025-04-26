/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:20:33 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/20 09:28:07 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal default constructor called" << std::endl;
    this->type = "default";
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src){
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

AAnimal::AAnimal(const AAnimal &src){
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

const std::string &AAnimal::getType() const{
    return (this->type);
}