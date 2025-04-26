/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:24:38 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 13:45:23 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter{
	private :
		const std::string	name;
		AMateria			*inventory[4];
		
	public :
		Character();
		virtual ~Character();
		Character(const std::string &name);
		Character(const Character &src);
		
		Character &operator=(const Character &src);

		const std::string	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		
		AMateria* getMateria(int idx) const;
		
};

#endif