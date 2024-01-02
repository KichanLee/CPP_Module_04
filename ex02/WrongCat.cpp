/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:55:50 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 10:14:47 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
  std::cout << "WrongCat default Constructor Call\n";
  type = "WrongCat";
};
WrongCat::~WrongCat() { std::cout << "WrongCat Destructor Call\n"; };
WrongCat::WrongCat(const WrongCat &rhs) {
  if (this != &rhs) *this = rhs;
  std::cout << "WrongCat Copy Constructor Call\n";
}
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  std::cout << "WrongCat Copy Operater desrtuctor Call\n";
  if (this != &rhs) this->type = rhs.type;
  return (*this);
}
void WrongCat::makeSound() const { std::cout << "niyaong!" << std::endl; }
std::string WrongCat::getType() const { return (this->type); }