/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:34:32 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 12:35:43 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class ICharacter; 

class Ice : public AMateria{
    public :
        Ice();
        ~Ice();
        Ice(const Ice &src);
        Ice &operator=(const Ice &src);

        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif