/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:06:46 by kichan            #+#    #+#             */
/*   Updated: 2023/12/28 18:55:02 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal() { type = "some animal"; }
Animal::Animal(const Animal &rhs) : type(rhs.type){};
Animal &Animal::operator=(const Animal &rhs) {
  if (this != &rhs) this->type = rhs.type;
  return (*this);
}
void Animal::makeSound() const { std::cout << "umma~~~" << std::endl; }
std::string Animal::getType() const { return type; }
