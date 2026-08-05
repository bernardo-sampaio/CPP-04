/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:54:43 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/05 15:17:04 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout<<this->type<<" type default constructor called\n";
}
Cat::Cat(const Cat& obj): Animal(obj)
{
    this->brain = new Brain();
    *this->brain = *obj.brain;
    std::cout<<"Cat "<<this->type<<" type copy constructor called\n";
}
Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
         this->type = obj.type;
        *this->brain = *obj.brain;
    }
    std::cout<<"Cat "<<this->type<<" type assignment operator called\n";
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout<<this->type<<" type destructor called\n";
}

void Cat::makeSound(void) const
{
    std::cout << "* Miau, miau! *\n";
}

void Cat::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return (this->brain->getIdea(index));
}