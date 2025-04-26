/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:36:28 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/17 15:31:35 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
	private :
		std::string name;
	public :
		std::string	getName();
		void		setName(const std::string name);
		void 		announce(void);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif