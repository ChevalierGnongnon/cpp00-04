/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:13 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 15:43:49 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    // }
    // {
        // Weapon club = Weapon("crude spiked club");
        // HumanB jim("Jim");
        // jim.setWeapon(club);
        // jim.attack();
        // club.setType("some other type of club");
        // jim.attack();
    // }
    return (0);
}