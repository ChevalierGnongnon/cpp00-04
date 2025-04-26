/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:49:50 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/17 13:39:50 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


std::string replace(std::string &content, std::string &s1, std::string &s2)
{
	std::string result;
	size_t		find;
	size_t 		pos;
	
	pos = 0;
	if (s1.empty())
		return (content);
	find = content.find(s1, pos);
	while (find !=std::string::npos)
	{
		result += content.substr(pos, find - pos);
		result += s2;
		pos = find + s1.length();
		find = content.find(s1, pos);
	}
	result += content.substr(pos);
	return (result);
}

void write_into_newfile(const std::string &filename, const std::string &content)
{
	std::string newFilename = filename + ".replace";
	std::ofstream newOne(newFilename.c_str());

	if (!newOne.is_open())
	{
		std::cerr << "Error: could not open file for writing" << std::endl;
		return ;
	}
	newOne << content;
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::stringstream buffer;
	std::string content, res;

	if (argc != 4)
	{
		std::cerr << "Error: wrong arguments (<filename> <s1> <s2>)" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cerr << "Error: could not open the input file" << std::endl;
		return (1);
	}
	buffer << infile.rdbuf();
	content = buffer.str();
	res = replace(content, s1, s2);
	write_into_newfile(filename, res);
	return (0);
}