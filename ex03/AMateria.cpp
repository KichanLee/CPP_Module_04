#include "AMateria.hpp"

AMateria::AMateria() {}
AMateria::AMateria(std::string const& type) : _type(type) {}
AMateria::AMateria(const AMateria& rhs) { *this = rhs; }
AMateria& AMateria::operator=(const AMateria& rhs) {
  if (this != &rhs) this->_type = rhs._type;

  return (*this);
}
AMateria::~AMateria() {}

std::string const& AMateria::getType() const { return (_type); }

void AMateria::use(ICharacter& target) {
  std::cout << target.getName() << "use function" << std::endl;
  ;
}
