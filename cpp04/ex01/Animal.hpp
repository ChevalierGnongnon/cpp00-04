/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:38:55 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/21 19:06:04 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal{
    protected :
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);

       virtual void    makeSound() const;

       const std::string &getType() const;
};

#endif