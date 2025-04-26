/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:40:26 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 11:26:51 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void){
	std::cout << "<-------------------[Default constructors tests]------------------->" << std::endl;
	Animal defAnimal;
	std::cout << "[type] : " << defAnimal.getType() << std::endl;
	Cat defCat;
	std::cout << "[type] : " << defCat.getType() << std::endl;
	Dog defDog;
	std::cout << "[type] : " << defDog.getType() << std::endl;
	WrongAnimal defWrongAnimal;
	std::cout << "[type] : " << defWrongAnimal.getType() << std::endl;
	WrongCat defWrongCat;
	std::cout << "[type] : " << defWrongCat.getType() << std::endl;
	
	std::cout << "<-------------------[Copy onstructors tests]------------------->" << std::endl;
	Animal copyAnimal(defAnimal);
	std::cout << "[type] : " << copyAnimal.getType() << std::endl;
	Cat copyCat(defCat);
	std::cout << "[type] : " << copyCat.getType() << std::endl;
	Dog copyDog(defDog);
	std::cout << "[type] : " << copyDog.getType() << std::endl;
	WrongAnimal copyWrongAnimal(defWrongAnimal);
	std::cout << "[type] : " << copyWrongAnimal.getType() << std::endl;
	WrongCat copyWrongCat(defWrongCat);
	std::cout << "[type] : " << copyWrongCat.getType() << std::endl;

	std::cout << "<-------------------[Copy assignment operator tests]------------------->" << std::endl;
	Animal operAnimal;
	operAnimal = defAnimal;
	std::cout << "[type] : " << operAnimal.getType() << std::endl;
	
	Cat operCat;
	operCat = defCat;
	std::cout << "[type] : " << operCat.getType() << std::endl;
	
	Dog operDog;
	operDog = defDog;
	std::cout << "[type] : " << operDog.getType() << std::endl;
	
	WrongAnimal operWrongAnimal;
	operWrongAnimal = defWrongAnimal;
	std::cout << "[type] : " << operWrongAnimal.getType() << std::endl;
	
	WrongCat operWrongCat;
	operWrongCat= defWrongCat;
	std::cout << "[type] : " << operWrongCat.getType() << std::endl;

	std::cout << "<-------------------[Construction with new tests]------------------->" << std::endl;
	Animal *a = new Animal();
	Dog *d = new Dog();
	Cat *c = new Cat();
	WrongAnimal *wa = new WrongAnimal();
	WrongCat	*wc = new WrongCat();
	WrongAnimal *baseWrong = new WrongCat();

	std::cout << "<-------------------[Make sound tests]------------------->" << std::endl;
	std::cout << "[default]";
	defAnimal.makeSound() ;
	std::cout << std::endl;

	std::cout << "[default] ";
	defCat.makeSound();

	std::cout << "[default] ";
	defDog.makeSound();
	std::cout << std::endl;

	std::cout << "[default] ";
	defWrongAnimal.makeSound();
	std::cout << std::endl;

	std::cout << "[default] ";
	defWrongCat.makeSound();
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyAnimal.makeSound();
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyCat.makeSound();
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyDog.makeSound();
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyWrongAnimal.makeSound();
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyWrongCat.makeSound();
	std::cout << std::endl;

	std::cout << "[operator] ";
	operAnimal.makeSound();
	std::cout << std::endl;

	std::cout << "[operator] ";
	operCat.makeSound();
	std::cout << std::endl;

	std::cout << "[operator] ";
	operDog.makeSound();
	std::cout << std::endl;

	std::cout << "[operator] ";
	operWrongAnimal.makeSound();
	std::cout << std::endl;

	std::cout << "[operator] ";
	operWrongCat.makeSound();
	std::cout << std::endl;

	std::cout << "[new] ";
	a->makeSound();
	std::cout << std::endl;

	std::cout << "[new] ";
	d->makeSound();
	std::cout << std::endl;

	std::cout << "[new] ";
	c->makeSound();
	std::cout << std::endl;

	std::cout << "[new] ";
	wa->makeSound();
	std::cout << std::endl;

	std::cout << "[new] ";
	wc->makeSound();
	std::cout << std::endl;

	std::cout << "[new] ";
	baseWrong->makeSound();
	std::cout << std::endl;

	delete a;
	delete d;
	delete c;
	delete wa;
	delete wc;
	delete baseWrong;
}