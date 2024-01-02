/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:40:46 by kichan            #+#    #+#             */
/*   Updated: 2024/01/02 14:00:05 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
 protected:
  std::string type;

 public:
  WrongAnimal();
  virtual ~WrongAnimal();
  WrongAnimal(const WrongAnimal& rhs);
  WrongAnimal& operator=(const WrongAnimal& rhs);
  WrongAnimal(std::string get_name);
  void makeSound() const;
  std::string getType() const;
};

#endif