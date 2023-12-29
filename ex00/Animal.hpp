/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:40:46 by kichan            #+#    #+#             */
/*   Updated: 2023/12/28 19:01:32 by kichan           ###   ########.fr       */
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
  Animal(const Animal &rhs);
  Animal &operator=(const Animal &rhs);
  virtual void makeSound() const;
  std::string getType() const;
};

#endif