#include "CharacterKichan.hpp"

CharacterKichan::CharacterKichan() {
  std::cout << "Default Constructor Call\n";
}
CharacterKichan::~CharacterKichan() {
  std::cout << "Destructor Call" << std::endl;
}
CharacterKichan::CharacterKichan(std::string name) : ICharacter(name) {}
std::string const& CharacterKichan::getName() const { return (this->_name); }
void CharacterKichan::equip(AMateria* m) {
  int i = 0;
  for (i; i < 4; ++i) {
    if (this->slot[i] != NULL) break;
  }
  if (i == 4)
    return;
  else
    slot[i] = m;
}
void CharacterKichan::unequip(int idx) {
  if (idx >= 0 && idx < 4 && slot[idx] != NULL) {
    this->slot[idx] = NULL;
    std::cout << "Amateria unequip!\n";
  }
}
void CharacterKichan::use(int idx, ICharacter& target) {
  if (idx >= 0 && idx < 4 && this->slot[idx] != NULL)
    std::cout << this->getName() << "use the " << this->slot[idx] << std::endl;
  else
    std::cout << this->getName() << "Cannot use the slot\n";
}
