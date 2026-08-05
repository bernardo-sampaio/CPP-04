/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:08:07 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/05 15:17:10 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout<<this->type<<" type default constructor called\n";
}
Dog::Dog(const Dog& obj): Animal(obj)
{
    this->brain = new Brain();
    *this->brain = *obj.brain;
    std::cout<<"Dog "<<this->type<<" type copy constructor called\n";
}
Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    std::cout<<this->type<<" type assignment operator called\n";
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout<<this->type<<" type destructor called\n";
}

void Dog::makeSound(void) const
{
    std::cout << "* Au, au! *\n";
}

void Dog::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}
std::string Dog::getIdea(int index) const
{
    return (this->brain->getIdea(index));
}