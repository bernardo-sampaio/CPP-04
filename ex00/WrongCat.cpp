/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:00:36 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 11:23:27 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout<<this->type<<" type default constructor called\n";
}
WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj)
{
    std::cout<<"WrongCat "<<this->type<<" type copy constructor called\n";
}
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout<<"WrongCat "<<this->type<<" type assignment operator called\n";
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout<<this->type<<" type destructor called\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "* Wrong Miau, miau! *\n";
}