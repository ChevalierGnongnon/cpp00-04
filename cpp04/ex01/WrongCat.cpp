/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:24:18 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/19 16:40:19 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src){
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat &src){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

void    WrongCat::makeSound() const{
    std::cout << "Meowoof" << std::endl;
}
