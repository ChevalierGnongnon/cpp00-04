/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:10:17 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 17:05:33 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class  Dog : public Animal {
    private :
        Brain *Cells;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        
        void makeSound() const;

		void setIdea(int i, const std::string &idea);
		std::string getIdea(int i) const;
};

#endif