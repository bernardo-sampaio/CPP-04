/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:08:07 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/03 19:32:40 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout<<"Dog "<<this->type<<" type default constructor called\n";
}
Dog::Dog(const Dog& obj): Animal(obj)
{
    this->type = obj.type;
    std::cout<<"Dog "<<this->type<<" type copy constructor called\n";
}
Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout<<"Dog "<<this->type<<" type assignment operator called\n";
    return *this;
}

Dog::~Dog()
{
    std::cout<<"Dog "<<this->type<<" type destructor called\n";
}