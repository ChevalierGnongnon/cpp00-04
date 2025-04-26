/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:26 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 10:06:34 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon {
	private :
		std::string type;
	public :
		std::string	getType();
		void		setType(std::string type);
	Weapon();
	Weapon(std::string type);
	~Weapon();
};

#endif