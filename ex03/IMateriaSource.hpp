#ifndef __IMATERIATSOURCE_HPP
#define __IMATERIATSOURCE_HPP

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};
#endif