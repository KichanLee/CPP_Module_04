#ifndef __CURE_HPP_
#define __CURE_HPP_

#include "AMateria.hpp"

class Cure : protected AMateria {
 private:
  std::string _type;

 public:
  Cure();
  Cure(const Cure& rhs);
  Cure& operator=(const Cure& rhs);
  ~Cure();
  void use(ICharacter& target);
  Cure* clone() const;
};

#endif