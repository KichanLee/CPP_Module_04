#ifndef __AMATERIA_HPP
#define __AMATERIA_HPP

<<<<<<< HEAD
#include <iostream>
#include <string>
=======
>>>>>>> 823b2866bc2685447266f9b2993c472e4c51eccc
class ICharacter;

class AMateria {
 protected:
<<<<<<< HEAD
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
=======
  /* data */
 public:
  AMateria(/* args */);
  AMateria(std::string const & type));
  ~AMateria();
  std::string const& getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
>>>>>>> 823b2866bc2685447266f9b2993c472e4c51eccc
};

#endif