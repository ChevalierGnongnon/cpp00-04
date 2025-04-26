/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:14:35 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 13:30:21 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal{
    protected :
        std::string type;
    public :
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);

        const std::string &getType() const;
        
        void    makeSound() const;
};

#endif