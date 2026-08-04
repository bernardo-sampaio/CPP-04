/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:54:43 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 11:23:03 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout<<this->type<<" type default constructor called\n";
}
Cat::Cat(const Cat& obj): Animal(obj)
{
    std::cout<<"Cat "<<this->type<<" type copy constructor called\n";
}
Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout<<"Cat "<<this->type<<" type assignment operator called\n";
    return *this;
}

Cat::~Cat()
{
    std::cout<<this->type<<" type destructor called\n";
}

void Cat::makeSound(void) const
{
    std::cout << "* Miau, miau! *\n";
}