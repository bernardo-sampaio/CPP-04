/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 10:58:53 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 11:43:53 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongSpecies";
    std::cout<<"WrongAnimal "<<this->type<<" type default constructor called\n";   
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    this->type = obj.type;
    std::cout<<"WrongAnimal "<<this->type<<" type copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout<<"WrongAnimal "<<this->type<<" type assignment operator called\n";
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal "<<this->type<<" type destructor called\n";
}
std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "* Wrong undefined species sound *\n";
}