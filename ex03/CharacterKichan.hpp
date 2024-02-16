#ifndef __CharacterKichan_HPP
#define __CharacterKichan_HPP

class AMateria;

#include "ICharacter.hpp"

class CharacterKichan : protected ICharacter {
 private:
  CharacterKichan();

 public:
  CharacterKichan(std::string name);
  CharacterKichan(const CharacterKichan& rhs);
  CharacterKichan& operator=(const CharacterKichan& rhs);
  ~CharacterKichan();
  std::string const& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif