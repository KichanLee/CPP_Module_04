#include "MateriaSource.hpp"

#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; ++i) this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) { *this = rhs; }

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
  if (this != &rhs) {
  }
  return (*this);
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; ++i) delete this->inventory[i];
}
void MateriaSource::learnMateria(AMateria* M) {
  for (int i = 0; i < 4; ++i) {
    if (this->inventory[i] == NULL) inventory[i] = M->clone();
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  if (type == "ice")
    return new Ice();
  else if (type == "cure")
    return new Cure();
  else
    return NULL;
}
