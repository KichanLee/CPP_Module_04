#ifndef __MateriaSource_HPP
#define __MateriaSource_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 private:
  AMateria* inventory[4];

 public:
  MateriaSource();
  MateriaSource(const MateriaSource& rhs);
  MateriaSource& operator=(const MateriaSource& rhs);
  ~MateriaSource();
  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const& type);
};

#endif