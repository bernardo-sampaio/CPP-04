/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/05 15:14:35 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout<<"================Main Test================\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    std::cout<<"\n\n================Array================\n";
    
    Animal* mutt[4];
    
    for (int k = 0; k < (4 / 2); k++)
        mutt[k] = new Dog();
    for (int k = 4 / 2; k < 4; k++)
        mutt[k] = new Cat();
    
    for (int k = 0; k < 4; k++)
        delete mutt[k];

    std::cout<<"\n\n================ My Deep Copy Test ================\n";
    Dog rex;
    rex.setIdea(0, "I want to eat.");
    Dog max(rex);
    max.setIdea(0, "I want to sleep.");
    std::cout<<"\n===================Ideas===================\n";
    
    std::cout<<"Max say: "<<max.getIdea(0)<<std::endl;
    std::cout<<"Rex say: "<<rex.getIdea(0)<<std::endl;
    max.setIdea(1, "I want to play.");
    rex.setIdea(1, "I want to sleep.");
    std::cout<<"Max say: "<<max.getIdea(1)<<std::endl;
    std::cout<<"Rex say: "<<rex.getIdea(1)<<std::endl;

    return 0;
}
