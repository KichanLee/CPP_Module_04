#include "Ice.hpp"

Ice::Ice() { std::cout << "Default Constructor" << std::endl; }
Ice::Ice(const Ice& rhs) { std::cout << "Copy Constructor" << std::endl; }
Ice& Ice::operator=(const Ice& rhs) {
  std::cout << "Copy Assignment Operator" << std::endl;
}