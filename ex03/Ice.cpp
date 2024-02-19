#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice& rhs) : AMateria("ice") { *this = rhs; }
Ice& Ice::operator=(const Ice& rhs) {
  if (this != &rhs) {
    AMateria::operator=(rhs);
  }

  return *this;
}

Ice::~Ice() {}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
Ice* Ice::clone() const { return (new Ice(*this)); }
