#ifndef __Character_HPP
#define __Character_HPP

class AMateria;

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
 private:
  Character();
  AMateria* slot[4];
  std::string _name;

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
