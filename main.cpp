#include <iostream>
#include <cassert>

void RightAnswer()
{ 
  std::cout<< "RightAnswer";
  assert(Sum(5, 5) == 10);   
}
int Sum(int a, int b)
{
  return a+b;
}
int main()
{
  
  std::cout<< "Hello World!";
  return 0;
}
