/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:40:46 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 09:52:49 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 protected:
  std::string type;

 public:
  Animal();
  virtual ~Animal();
  Animal(std::string get_name);
  Animal(const Animal &rhs);
  Animal &operator=(const Animal &rhs);
  virtual void makeSound() const;
  std::string getType() const;
};

#endif