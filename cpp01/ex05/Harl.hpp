/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:05:09 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/18 16:51:21 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>

class Harl{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public :
		void	complain(std::string level);
		Harl();
		~Harl();
};

#endif