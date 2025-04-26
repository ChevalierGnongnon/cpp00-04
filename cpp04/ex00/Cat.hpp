/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:51:32 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 13:00:47 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class  Cat : public Animal {
    public:
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        
        void makeSound() const;
};

#endif