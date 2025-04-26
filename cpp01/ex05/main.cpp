/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:05:12 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/19 09:09:49 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl karen;

    karen.complain("aaa");
    karen.complain("warning");
    karen.complain("debug");
    karen.complain("info");
    karen.complain("error");
	karen.complain("");
}
