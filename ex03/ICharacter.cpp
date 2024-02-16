#include "ICharacter.hpp"

ICharacter::ICharacter() { std::cout << "Default Constructor Call\n"; }
ICharacter::ICharacter(std::string name) : _name(name) {
  std::cout << "Defalut Constructor Call\n";
  for (int i = 0; i < 4; ++i) this->slot[i] = NULL;
}
ICharacter::~ICharacter() { std::cout << "Destructor Call" << std::endl; }
ICharacter::ICharacter(const ICharacter& rhs) {
  std::cout << "Copy Constructor Call\n";
}
ICharacter& ICharacter::operator=(const ICharacter& rhs) {
  std::cout << "Copy operator constructor call\n";
}