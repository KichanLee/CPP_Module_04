#ifndef __AMATERIA_HPP
#define __AMATERIA_HPP

#include <iostream>
#include <string>
class ICharacter;

class AMateria {
 protected:
  std::string _type;

 public:
  AMateria(/* args */);
  AMateria(std::string const& type);
  AMateria(const AMateria& rhs);
  AMateria& operator=(const AMateria& rhs);
  std::string const& getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
  virtual ~AMateria();
};

#endif