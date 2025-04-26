/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:18:36 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 17:52:58 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
	private :
		std::string name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public :
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator = (const ClapTrap &otherOne);
		~ClapTrap();
		
		std::string getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		
		void	set_attack_damage(unsigned int value);
		
		void	attack(const std::string &target);
		void 	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif