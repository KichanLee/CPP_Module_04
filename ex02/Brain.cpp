/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:08:53 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 12:12:45 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain Default Constuructor Call!\n";
  for (int i = 0; i < 100; ++i) this->ideas[i] = "brain";
}

Brain::~Brain() { std::cout << "Brain Destructor Call!\n"; }
Brain::Brain(const Brain &rhs) {
  *this = rhs;
  std::cout << "Brain Copy Constuructor Call!\n";
}
Brain &Brain::operator=(const Brain &rhs) {
  std::cout << "Brain Copy Operator Constuructor Call!\n";
  if (this != &rhs) {
    for (int i = 0; i < 100; ++i) this->ideas[i] = rhs.ideas[i];
  }
  return (*this);
}

void Brain::modify_ideas(std::string name) {
  for (int i = 0; i < 100; ++i) this->ideas[i] = name;
}