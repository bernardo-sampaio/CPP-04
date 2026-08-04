/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:44:53 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 19:31:38 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "Learn C++";
    std::cout<<"Brain default constructor called\n";
}
Brain::Brain(const Brain& obj)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    std::cout<<"Brain copy constructor called\n";
}
Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    std::cout<<"Brain assignment operator called\n";
    return *this;
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called\n";
}

void Brain::setIdea(int index, std::string idea)
{
    if (index >= 100)
        return ;
    this->ideas[index] = idea;
}
std::string Brain::getIdea(int index) const
{
    return (this->ideas[index]);
}
