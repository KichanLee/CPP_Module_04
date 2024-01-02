/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:58:07 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 14:32:57 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat default constructor called" << std::endl;
  this->bp = new Brain();
}

Cat::~Cat() {
  delete this->bp;
  std::cout << "Cat desctructor called" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {
  std::cout << "Cat Copy constructor called" << std::endl;
  this->bp = new Brain();
  *this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {
  std::cout << "Cat Copy assignment constructor called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    if (this->bp) delete this->bp;
    this->bp = new Brain(*rhs.bp);
  }
  return *this;
}

void Cat::makeSound() const { std::cout << "niyaong!" << std::endl; }