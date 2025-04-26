/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:38:55 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/20 09:28:58 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal{
    protected :
        std::string type;
    public :
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal &src);
        AAnimal &operator=(const AAnimal &src);

       virtual void    makeSound() const = 0;

       const std::string &getType() const;
};

#endif