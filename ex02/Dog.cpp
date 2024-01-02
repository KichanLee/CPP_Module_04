/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:05:12 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 14:32:47 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog default constructor called" << std::endl;
  this->bp = new Brain();
}

Dog::~Dog() {
  delete this->bp;
  std::cout << "Dog desctructor called" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {
  std::cout << "Dog Copy constructor called" << std::endl;
  this->bp = new Brain();
  *this = rhs;
}

Dog& Dog::operator=(const Dog& rhs) {
  std::cout << "Dog Copy assignment constructor called" << std::endl;
  if (this != &rhs) {
    if (this->bp) delete this->bp;
    this->type = rhs.type;
    this->bp = new Brain(*rhs.bp);
  }
  return *this;
}

void Dog::setBrain(std::string br, int i) { this->bp->ideas[i] = br; }

std::string Dog::getBrain(int i) const { return this->bp->ideas[i]; }
void Dog::makeSound() const {
  std::cout << this->type << " wal wal" << std::endl;
}