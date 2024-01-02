/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:29:51 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 14:14:55 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << meta->getType() << " " << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  delete meta;
  delete i;
  delete j;

  const WrongAnimal* wa = new WrongAnimal("wrong animal");
  const WrongAnimal* wc = new WrongCat();

  wa->makeSound();
  wc->makeSound();
  std::cout << wa->getType() << " " << std::endl;
  std::cout << wc->getType() << " " << std::endl;

  delete wa;
  delete wc;
}