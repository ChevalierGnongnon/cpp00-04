/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:18:49 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/23 17:00:09 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain{
    private :
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &src);

        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
};

#endif