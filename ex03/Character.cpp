#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) : _name(name) {
  for (int i = 0; i < 4; ++i) slot[i] = NULL;
}

Character::Character(const Character& rhs) { *this = rhs; }

Character& Character::operator=(const Character& rhs) {
  if (this != &rhs) {
    _name = rhs._name;
    for (int i = 0; i < 4; ++i) {
      if (rhs.slot[i]) slot[i] = rhs.slot[i];
    }
  }
  return (*this);
}

Character::~Character() {
  for (int i = 0; i < 4; i++)
    if (slot[i]) delete slot[i];
}

std::string const& Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m) {
  if (m == NULL) return;

  for (int i = 0; i < 4; ++i) {
    if (this->slot[i] == NULL) {
      slot[i] = m;

      return;
    }
  }
  std::cout << "Inventory is full, cannot equip " << m->getType() << std::endl;
}

void Character::unequip(int idx) {
  if (idx >= 0 && idx < 4 && this->slot[idx] != NULL) {
    std::cout << this->getName() << " unequip " << slot[idx]->getType()
              << std::endl;
    this->slot[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter& target) {
  if (idx >= 0 && idx < 4 && this->slot[idx] != NULL) {
    this->slot[idx]->use(target);
  } else
    std::cout << this->getName() << " Cannot use the slot\n";
}
