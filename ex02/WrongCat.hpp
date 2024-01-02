/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:55:50 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 10:13:54 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  ~WrongCat();
  WrongCat(const WrongCat &rhs);
  WrongCat &operator=(const WrongCat &rhs);
  void makeSound() const;
  std::string getType() const;
};

#endif