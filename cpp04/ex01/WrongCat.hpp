/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:25:04 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/19 16:27:01 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &src);
        
        void makeSound() const;
};

#endif