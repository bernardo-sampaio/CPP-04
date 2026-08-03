/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/03 19:30:36 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal cow;
    Cat cat;
    Dog dog;

    std::cout<<"This is the type of the Animal class "<<dog.getType()<<std::endl;
    std::cout<<"This is the type of the Cat class "<<cat.getType()<<std::endl;
    std::cout<<"This is the type of the Dog class "<<cow.getType()<<std::endl;
    return (0);
}