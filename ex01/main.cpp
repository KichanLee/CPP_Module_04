#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;  // 메모리 누수가 발생하지 않아야 함
  delete i;
  // ...
  return 0;
}
