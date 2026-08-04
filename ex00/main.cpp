/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 11:47:45 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout<<"==================== Test ====================\n\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout<<"\n\n==================== Wrong Test ====================\n\n";
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();
    wrong->makeSound();
    std::cout<<"-------------------Destructor-------------------\n";
    delete wrong;
    delete wrongCat;

    std::cout<<"\n\n==================== My Test ====================\n\n";
    const Animal* mutt = new Animal();
    const Animal* rex = new Dog();
    const Animal* tom = new Cat();

    std::cout << rex->getType() << " " << std::endl;
    std::cout << tom->getType() << " " << std::endl;
    rex->makeSound();
    tom->makeSound();
    mutt->makeSound();
    
    delete mutt;
    delete rex;
    delete tom;

    std::cout<<"\n\n==================== More Test ====================\n\n";
    return 0;
}
