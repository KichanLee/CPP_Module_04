#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 private:
  std::string ideas[100];

 public:
  Brain();
  ~Brain();
  Brain(const Brain &rhs);
  Brain &operator=(const Brain &rhs);
};

#endif