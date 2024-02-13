#include <iostream>
#include <cassert>
int Sum(int a, int b)
{
  return a+b;
}
int main()
{
  assert(Sum(5+5) == 5);
  std::cout<< "Hello World!";
  return 0;
}
