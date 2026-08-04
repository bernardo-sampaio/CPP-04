/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 19:14:32 by bsampaio         ###   ########.fr       */
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
    
    std::cout<<"\n\n================My Test================\n";
    
    Animal* mutt[4];
    
    for (int k = 0; k < (4 / 2); k++)
        mutt[k] = new Dog();
    for (int k = 4 / 2; k < 4; k++)
        mutt[k] = new Cat();
    
    for (int k = 0; k < (4 / 2); k++)
        delete mutt[k];
    for (int k = 4 / 2; k < 4; k++)
        delete mutt[k];
    return 0;
}
