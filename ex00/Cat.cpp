/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:58:07 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 13:34:50 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() { std::cout << "Cat desctructor called" << std::endl; }

Cat::Cat(const Cat& rhs) : Animal(rhs) {
  std::cout << "Cat Copy constructor called" << std::endl;
  *this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {
  std::cout << "Cat Copy assignment constructor called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}
void Cat::makeSound() const { std::cout << "niyaong!" << std::endl; }