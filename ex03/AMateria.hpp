#ifndef __AMATERIA_HPP
#define __AMATERIA_HPP

class ICharacter;

class AMateria {
 protected:
  /* data */
 public:
  AMateria(/* args */);
  AMateria(std::string const & type));
  ~AMateria();
  std::string const& getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

AMateria::AMateria(/* args */) {}

AMateria::~AMateria() {}

#endif