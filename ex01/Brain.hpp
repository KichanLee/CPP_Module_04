/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:08:59 by kichlee           #+#    #+#             */
/*   Updated: 2024/01/02 14:04:27 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
 public:
  std::string ideas[100];
  Brain();
  ~Brain();
  Brain(const Brain &rhs);
  Brain &operator=(const Brain &rhs);
};

#endif