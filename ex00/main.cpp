/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:36:25 by bsampaio          #+#    #+#             */
/*   Updated: 2026/08/04 10:16:26 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
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
    return 0;
}


/*
int main(void)
{
    std::cout<<"==================== Constructor ====================\n";
    Cat cat;
    Dog dog;

    std::cout<<"\n====================Test Dog====================\n";
    std::cout<<"Their type is: "<<dog.getType()<<std::endl;
    dog.makeSound();
    std::cout<<"\n====================Test Cat====================\n";
    std::cout<<"Their type is: "<<cat.getType()<<std::endl;
    cat.makeSound();

    std::cout<<"\n==================== Destructor ====================\n";
    return (0);
}*/