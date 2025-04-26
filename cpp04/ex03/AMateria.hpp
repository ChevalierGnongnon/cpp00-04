/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:23:24 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/25 13:52:53 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>

# include "ICharacter.hpp"

class AMateria{
    protected:
        std::string _type;

    public :
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &src);
        AMateria &operator=(const AMateria &src);
        
        const std::string &getType()const;
        
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif