#ifndef __ICE_HPP
#define __ICE_HPP

#include "AMateria.hpp"

class Ice : protected AMateria {
 private:
  std::string _type;

 public:
  Ice();
  Ice(const Ice& rhs);
  Ice& operator=(const Ice& rhs);
  ~Ice();
  void use(ICharacter& target);
  Ice* clone() const;
};

#endif