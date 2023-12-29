/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:58:00 by kichan            #+#    #+#             */
/*   Updated: 2023/12/28 20:01:15 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
  type = "Dog";
  Brain* bp = new Brain;
};
Dog::~Dog(){};
Dog::Dog(const Dog& rhs) {
  if (this != &rhs) *this = rhs;
}
Dog& Dog::operator=(const Dog& rhs) {
  if (this != &rhs) this->type = rhs.type;
  return (*this);
}
void Dog::makeSound() const { std::cout << "wal!wal!" << std::endl; }
