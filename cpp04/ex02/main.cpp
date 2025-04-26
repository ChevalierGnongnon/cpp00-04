/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:38:10 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/24 16:07:20 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void){
	std::cout << "<-------------------[Default constructors tests]------------------->" << std::endl;
	Cat defCat;
	std::cout << "[type] : " << defCat.getType() << std::endl;
	Dog defDog;
	std::cout << "[type] : " << defDog.getType() << std::endl;
	WrongAnimal defWrongAnimal;
	std::cout << "[type] : " << defWrongAnimal.getType() << std::endl;
	WrongCat defWrongCat;
	std::cout << "[type] : " << defWrongCat.getType() << std::endl;
	
	std::cout << "<-------------------[Copy onstructors tests]------------------->" << std::endl;
	Cat copyCat(defCat);
	std::cout << "[type] : " << copyCat.getType() << std::endl;
	Dog copyDog(defDog);
	std::cout << "[type] : " << copyDog.getType() << std::endl;
	WrongAnimal copyWrongAnimal(defWrongAnimal);
	std::cout << "[type] : " << copyWrongAnimal.getType() << std::endl;
	WrongCat copyWrongCat(defWrongCat);
	std::cout << "[type] : " << copyWrongCat.getType() << std::endl;

	std::cout << "<-------------------[Copy assignment operator tests]------------------->" << std::endl;
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
	operWrongCat = defWrongCat;
	std::cout << "[type] : " << operWrongCat.getType() << std::endl;

	std::cout << "<-------------------[Construction with new tests]------------------->" << std::endl;
	Dog *d = new Dog();
	Cat *c = new Cat();
	WrongAnimal *wa = new WrongAnimal();
	WrongCat	*wc = new WrongCat();
	WrongAnimal *baseWrong = new WrongCat();

	std::cout << "<-------------------[Make sound tests]------------------->" << std::endl;

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

	std::cout << "<-------------------[setIdea tests]------------------->" << std::endl;

	std::cout << "[default] ";
	defCat.setIdea(0, "big nap");
	std::cout << std::endl;
	
	std::cout << "[default] ";
	defDog.setIdea(0, "food, delicious food");
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyCat.setIdea(-1, "big nap");
	std::cout << std::endl;

	std::cout << "[copy] ";
	copyDog.setIdea(42, "i'm just a freaking clone");
	std::cout << std::endl;

	std::cout << "[operator] ";
	operCat.setIdea(101, "shall i conquer the world?");
	std::cout << std::endl;

	std::cout << "<-------------------[getIdea tests]------------------->" << std::endl;
	std::cout << "[default]" << defCat.getIdea(0) << std::endl;
	std::cout << "[default]" << defDog.getIdea(0) << std::endl;
	std::cout << "[copy]" << copyCat.getIdea(-1) << std::endl;
	std::cout << "[copy]" << copyDog.getIdea(42) << std::endl;
	std::cout << "[operator]" << operCat.getIdea(101) << std::endl;
	
	delete d;
	delete c;
	delete wa;
	delete wc;
	delete baseWrong;
}