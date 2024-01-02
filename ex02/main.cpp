/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:12:57 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 13:01:38 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
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

  return 0;
}
