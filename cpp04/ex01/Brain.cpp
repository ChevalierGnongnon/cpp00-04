/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:48:17 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 11:34:56 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = "";
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src){
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = src.ideas[i];
}
Brain &Brain::operator=(const Brain &src){
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &src){
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return (*this);
}

std::string Brain::getIdea(int index) const{
	static std::string error = "invalid index!";
    if (index < 0 || index >= 100)
        return (error);
    return (this->ideas[index]);
}

void Brain::setIdea(int index, const std::string &idea){
    if (index < 0 || index >= 100){
        std::cout << "Error : wrong index !" << std::endl;
        return ;
    }
    this->ideas[index] = idea;
	std::cout << "Idea set at index " << index << " : " << idea << std::endl;
}
