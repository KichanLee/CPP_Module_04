/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:57:31 by kichan            #+#    #+#             */
/*   Updated: 2023/12/28 19:56:23 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 private:
  Brain *hp;

 public:
  Dog();
  ~Dog();
  Dog(const Dog &rhs);
  Dog &operator=(const Dog &rhs);
  void makeSound() const;
};

#endif