/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 19:40:43 by bsampaio         ###   ########.fr       */
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
    
    for (int k = 0; k < (4 / 2); k++)
        delete mutt[k];
    for (int k = 4 / 2; k < 4; k++)
        delete mutt[k];
    std::cout<<"\n\n================ My Test ================\n";
    Dog max;
    Dog rex;

    max = rex;
    std::cout<<"\n===================Ideas===================\n";
    max.setIdea(0, "Max wants to eat");
    std::cout<<max.getIdea(0)<<" and Mex want to"<<rex.getIdea(0)<<std::endl;
    return 0;
}
