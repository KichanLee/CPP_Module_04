#include "Cure.hpp"

Cure::Cure() : _type("ice") { std::cout << "Default Constructor" << std::endl; }
Cure::Cure(const Cure& rhs) { std::cout << "Copy Constructor" << std::endl; }
Cure& Cure::operator=(const Cure& rhs) {
  std::cout << "Copy Assignment Operator" << std::endl;
}
Cure::~Cure() { std::cout << "Destructor Call" << std::endl; }

void Cure::use(ICharacter& target) {
  std::cout << "shoots an Cure bolt at " << target.getName() << std::endl;
}
Cure* Cure::clone() const { return (new Cure(*this)); }