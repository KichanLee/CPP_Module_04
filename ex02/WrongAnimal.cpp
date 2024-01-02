/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:06:46 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 10:01:29 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal default Constructor Call\n";
}
WrongAnimal::WrongAnimal(std::string get_name) {
  this->type = get_name;
  std::cout << "WrongAnimal Constructor Call\n";
}
WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal Destructor Call\n"; }
WrongAnimal::WrongAnimal(const WrongAnimal &rhs) : type(rhs.type) {
  std::cout << "WrongAnimal Copy Constructor Call\n";
};
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  std::cout << "WrongAnimal Copy Operater desrtuctor Call\n";
  if (this != &rhs) this->type = rhs.type;
  return (*this);
}
void WrongAnimal::makeSound() const { std::cout << "umma~~~" << std::endl; }
std::string WrongAnimal::getType() const { return type; }
