/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:09 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 13:37:06 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB{
	private :
		std::string name;
		Weapon		*weapon;
	public :
		std::string getName();
		Weapon		*getWeapon();
		void		setName(std::string name);
		void		setWeapon(Weapon &Weapon);
		void		attack();
	HumanB(std::string name);
	~HumanB();
};
#endif