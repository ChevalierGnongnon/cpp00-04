/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:52:28 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/18 14:29:23 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
	protected :
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
		
		virtual void	attack(const std::string &target);
		void 	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif