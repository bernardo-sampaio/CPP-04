/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:10:11 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/03 18:47:32 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Mammal";
    std::cout<<"Animal "<<this->type<<" type default constructor called\n";   
}
Animal::Animal(const Animal& obj)
{
    this->type = obj.type;
    std::cout<<"Animal "<<this->type<<" type copy constructor called\n";
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout<<"Animal "<<this->type<<" type assignment operator called\n";
    return *this;
}

Animal::~Animal()
{
    std::cout<<"Animal "<<this->type<<" type destructor called\n";
}
std::string Animal::getType(void) const
{
    return this->type;
}