#include "Character.hpp"

Character::Character() { std::cout << "Default Constructor Call\n"; }
Character::~Character() { std::cout << "Destructor Call" << std::endl; }
Character::Character(std::string name) : ICharacter(name) {}
std::string const& Character::getName() const { return (this->_name); }
void Character::equip(AMateria* m) {
  int i;
  for (i = 0; i < 4; ++i) {
    if (this->slot[i] != NULL) break;
  }
  if (i == 4)
    return;
  else
    slot[i] = m;
}
void Character::unequip(int idx) {
  if (idx >= 0 && idx < 4 && slot[idx] != NULL) {
    this->slot[idx] = NULL;
    std::cout << "Amateria unequip!\n";
  }
}
void Character::use(int idx, ICharacter& target) {
  if (idx >= 0 && idx < 4 && this->slot[idx] != NULL)
    std::cout << this->getName() << "use the " << this->slot[idx] << std::endl;
  else
    std::cout << this->getName() << "Cannot use the slot\n";
}
