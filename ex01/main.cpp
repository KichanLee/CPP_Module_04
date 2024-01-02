/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:12:57 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 15:14:16 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;
  delete i;

  Animal* animal[100];

  for (int cnt = 0; cnt < 50; ++cnt) animal[cnt] = new Dog;

  for (int cnt = 50; cnt < 100; ++cnt) animal[cnt] = new Cat;

  std::cout << std::endl;

  for (int cnt = 0; cnt < 50; ++cnt) {
    if (animal[cnt]) {
      animal[cnt]->makeSound();
      delete animal[cnt];
    }
  }
  for (int cnt = 50; cnt < 100; ++cnt) {
    if (animal[cnt]) {
      animal[cnt]->makeSound();
      delete animal[cnt];
    }
  }

  std::cout << std::endl;

  Dog dog;
  Dog dog_cpy;

  std::cout << std::endl;

  std::cout << dog.getBrain(0) << std::endl;
  dog.setBrain("Solana", 0);
  std::cout << dog.getBrain(0) << std::endl;

  std::cout << dog_cpy.getBrain(1) << std::endl;
  dog_cpy.setBrain("Bitcoin", 1);
  std::cout << dog_cpy.getBrain(1) << std::endl;

  std::cout << dog.getBrain(0) << std::endl;
  std::cout << dog_cpy.getBrain(1) << std::endl;

  dog_cpy = dog;

  std::cout << dog_cpy.getBrain(0) << std::endl;
  std::cout << dog_cpy.getBrain(1) << std::endl;

  std::cout << "\ntest ends\n";
  std::cout << std::endl;

  std::cout << std::endl;

  return 0;
}
