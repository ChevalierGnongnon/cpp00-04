/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:35:46 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/20 14:16:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria{
    public :
        Cure();
        ~Cure();
        Cure(const Cure &src);
        Cure &operator=(const Cure &src);

        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif