/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:51:32 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 17:03:55 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class  Cat : public Animal {
    private :
        Brain *Cells;
    
    public:
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        
        void makeSound() const;

		void setIdea(int i, const std::string &idea);
		std::string getIdea(int i) const;

};

#endif