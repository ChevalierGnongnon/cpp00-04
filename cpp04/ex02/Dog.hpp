/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:10:17 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 17:36:14 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
class  Dog : public AAnimal {
    private :
        Brain *Cells;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        
        void makeSound() const;

		void setIdea(int i, const std::string &idea);
		std::string getIdea(int i) const;
};

#endif