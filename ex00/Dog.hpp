/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:57:31 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 09:47:45 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog();
  ~Dog();
  Dog(const Dog &rhs);
  Dog &operator=(const Dog &rhs);
  void makeSound() const;
};

#endif