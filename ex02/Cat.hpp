/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:57:10 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 11:13:10 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 private:
  Brain *bp;

 public:
  Cat();
  ~Cat();
  Cat(const Cat &rhs);
  Cat &operator=(const Cat &rhs);
  void makeSound() const;
};

#endif