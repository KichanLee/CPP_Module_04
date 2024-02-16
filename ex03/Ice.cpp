#include "Ice.hpp"

Ice::Ice() : _type("ice") { std::cout << "Default Constructor" << std::endl; }
Ice::Ice(const Ice& rhs) { std::cout << "Copy Constructor" << std::endl; }
Ice& Ice::operator=(const Ice& rhs) {
  std::cout << "Copy Assignment Operator" << std::endl;
}
Ice::~Ice() { std::cout << "Destructor Call" << std::endl; }

void Ice::use(ICharacter& target) {
  std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
Ice* Ice::clone() const { return (new Ice(*this)); }