#include <iostream>

class test {
 private:
  int n;

 public:
  test(/* args */);
  ~test();
};

test::test(/* args */) {}

test::~test() {}

class child : public test {
 private:
  /* data */
 public:
};

void leaks() { system("leaks a.out"); }

int main() {
  test *t = new child;

  leaks();
}