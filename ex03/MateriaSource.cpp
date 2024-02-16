#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  std::cout << "Default Constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& rhs) {
  std::cout << "Copy Constructor" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
  std::cout << "Copy Operator Constructor" << std::endl;
}

MateriaSource::~MateriaSource() { std::cout << "Destructor Call" << std::endl; }
void MateriaSource::learnMateria(AMateria* M) {
  for (int i = 0; i < 4; ++i) {
    if (this->inventory[i] == NULL) inventory[i] = M;
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < 4; ++i) {
    if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
      return this->inventory[i]->clone();
  }
  return (NULL);
}

/**
 *
   AMateria* createMateria(std::string const & type) override {
       for (auto& materia : materias) {
           if (materia != nullptr && materia->getType() == type) {
               return materia->clone();
           }
       }
       return nullptr;
   }
 *
 *
 *
*/