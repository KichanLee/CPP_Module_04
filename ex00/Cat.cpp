/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:58:07 by kichan            #+#    #+#             */
/*   Updated: 2023/12/28 18:57:03 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() { type = "Cat"; };
Cat::~Cat(){};
Cat::Cat(const Cat &rhs) {
  if (this != &rhs) *this = rhs;
}
Cat &Cat::operator=(const Cat &rhs) {
  if (this != &rhs) this->type = rhs.type;
  return (*this);
}
void Cat::makeSound() const { std::cout << "niyaong!" << std::endl; }