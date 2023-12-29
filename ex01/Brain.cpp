#include "Brain.hpp"

Brain::Brain() {
  for (int i = 0; i < 100; ++i) this->ideas[i] = i + " ideas";
}
Brain::~Brain() {}
Brain::Brain(const Brain &rhs) {}
Brain &Brain::operator=(const Brain &rhs) {
  if (this != &rhs) {
    for (int i = 0; i < 100; ++i) this->ideas[i] = rhs.ideas[i];
  }
  return (*this);
}
