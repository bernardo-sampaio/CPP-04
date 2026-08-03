/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/03 18:50:19 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void)
{
    Animal dog;
    Animal cat(dog);
    Animal cow;

    cow = cat;

    std::cout<<"This is the type of the Animal class "<<dog.getType()<<std::endl;
    std::cout<<"This is the type of the Animal class "<<cat.getType()<<std::endl;
    std::cout<<"This is the type of the Animal class "<<cow.getType()<<std::endl;
    return (0);
}