/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:58:00 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 12:06:08 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() { std::cout << "Dog desctructor called" << std::endl; }

Dog::Dog(const Dog& ref) {
  std::cout << "Dog Copy constructor called" << std::endl;
  *this = ref;
}

Dog& Dog::operator=(const Dog& rhs) {
  std::cout << "Dog Copy assignment constructor called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void Dog::makeSound() const {
  std::cout << this->type << " wal wal" << std::endl;
}
