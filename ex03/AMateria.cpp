#include "AMateria.hpp"

AMateria::AMateria() { std::cout << "Default Constructor Call\n"; }
AMateria::AMateria(std::string const& type) : _type(type) {
  std::cout << "Default Constructor Call\n";
}
AMateria::AMateria(const AMateria& rhs) {}
AMateria& AMateria::operator=(const AMateria& rhs) {}
std::string const& AMateria::getType() const { return (_type); }
void AMateria::use(ICharacter& target) {
  std::cout << "use function" << std::endl;
}