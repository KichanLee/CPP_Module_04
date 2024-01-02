/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:06:46 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 14:27:51 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal() { std::cout << "Animal default Constructor Call\n"; }
Animal::Animal(std::string get_name) {
  this->type = get_name;
  std::cout << "Animal Constructor Call\n";
}
Animal::~Animal() { std::cout << "Animal Destructor Call\n"; }
Animal::Animal(const Animal &rhs) : type(rhs.type) {
  std::cout << "Animal Copy Constructor Call\n";
};
Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "Animal Copy Operater desrtuctor Call\n";
  if (this != &rhs) this->type = rhs.type;
  return (*this);
}
std::string Animal::getType() const { return type; }
