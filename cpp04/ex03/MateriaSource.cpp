/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:50:47 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 14:28:48 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->source[i] = NULL;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		delete this->source[i];
		this->source[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src){
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->source[i] = NULL;
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src){
	std::cout << "MateriaSource copy assignment operator called" << std::endl;

	if (this != &src){
		for (int i = 0; i < 4; i++){
			if (source[i]) {
				delete source[i];
			}
			if (src.source[i]) {
				source[i] = src.source[i]->clone();
			}
			else {
				source[i] = NULL;
			}
		}
	}
	return (*this);
}

// MateriaSource &MateriaSource::operator=(const MateriaSource &src){
// 	std::cout << "MateriaSource copy assignment operator called" << std::endl;
// 	if (this != &src){
// 		for (int i = 0; i < 4; i++){
// 			if (source[i])
// 				delete source[i];
// 			if (src.source[i])
// 				source[i] = src.source[i]->clone();
// 			else
// 				source[i] = NULL;
// 		}
// 	}
// 	return (*this);
// }

void	MateriaSource::learnMateria(AMateria *m){
	if (m == NULL){
		std::cout << "Error ! Materia is inexistant." << std::endl;
		return ;
	}
	int i = 0;
	while (i < 4 && this->source[i] != NULL)
		i++;
	if (i == 4){
		std::cout << "Error ! No space left on device." << std::endl;
		return ;
	}
	this->source[i] = m->clone();
}

AMateria *MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i ++){
		if (source[i] && source[i]->getType() == type)
			return (source[i]->clone());
	}
	std::cout << "Error ! No materia of this type here ..." << std::endl;
	return (NULL);
}