/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:24:35 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 14:58:51 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void) {
	std::cout << "<--------------[default constructors tests]-------------->" << std::endl;
	Ice defIce;
	Cure defCure;
	Character defCharacter;
	MateriaSource defSrc;

	std::cout << "<--------------[name constructor tests]-------------->" << std::endl;
	Character constructCharacter("Cloud");

	std::cout << "<--------------[copy constructors tests]-------------->" << std::endl;
	Ice copyIce(defIce);
	Cure copyCure(defCure);
	Character copyCharacter(constructCharacter);
	MateriaSource copyMateriaSource(defSrc);

	std::cout << "<--------------[copy assignment operator tests]-------------->" << std::endl;
	Ice assignIce;
	assignIce = defIce;
	Cure assignCure;
	assignCure = defCure;
	Character cloud("Cloud");

	AMateria* to_delete3 = cloud.getMateria(0);
	cloud.unequip(0);
	delete to_delete3;

	cloud = defCharacter;

	MateriaSource assignMateriaSource;
	assignMateriaSource = defSrc;

	std::cout << "<--------------[new operator tests]-------------->" << std::endl;
	Ice *newIce = new Ice();
	Cure *newCure = new Cure();
	Character *tifa = new Character("Tifa");
	Character *sephiroth = new Character("Sephiroth");
	MateriaSource *newMateriaSource = new MateriaSource();

	std::cout << "<--------------[Materia tests]-------------->" << std::endl;
	AMateria* tmp1 = new Ice();
	AMateria* tmp2 = new Cure();
	defSrc.learnMateria(tmp1);
	defSrc.learnMateria(tmp2);
	delete tmp1;
	delete tmp2;

	AMateria* m1 = defSrc.createMateria("ice");
	AMateria* m2 = defSrc.createMateria("cure");
	AMateria* m3 = defSrc.createMateria("unknown");

	std::cout << "<--------------[Materia equipment tests]-------------->" << std::endl;
	tifa->equip(m1);
	cloud.equip(m2);
	cloud.use(0, *sephiroth);
	tifa->use(0, *sephiroth);

	std::cout << "<--------------[deep copy tests]-------------->" << std::endl;
	AMateria* to_delete = cloud.getMateria(0);
	cloud.unequip(0);
	Character copy(cloud);
	copy.use(0, *sephiroth);
	delete to_delete;

	AMateria* to_delete2 = tifa->getMateria(0);
	tifa->unequip(0);
	delete to_delete2;

	std::cout << "<--------------[overflow equip tests]-------------->" << std::endl;
	for (int i = 0; i < 5; ++i) {
		AMateria* extra = new Ice();
		int before = 0;
		for (int j = 0; j < 4; ++j)
			if (tifa->getMateria(j))
				before++;
		tifa->equip(extra);
		int after = 0;
		for (int j = 0; j < 4; ++j)
			if (tifa->getMateria(j))
				after++;
		if (after == before)
			delete extra;
	}

	std::cout << "<--------------[invalid unequip]-------------->" << std::endl;
	cloud.unequip(0);
	cloud.unequip(4);
	cloud.unequip(-1);

	std::cout << "<--------------[manual cleanup for new]-------------->" << std::endl;
	delete newIce;
	delete newCure;
	delete tifa;
	delete sephiroth;
	delete newMateriaSource;
}

