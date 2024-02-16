#ifndef __Character_HPP
#define __Character_HPP

class AMateria;

#include "ICharacter.hpp"

class Character : protected ICharacter {
 private:
  Character();

 public:
  Character(std::string name);
  Character(const Character& rhs);
  Character& operator=(const Character& rhs);
  ~Character();
  std::string const& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif