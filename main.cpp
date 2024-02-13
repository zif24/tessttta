#include <iostream>
#include <cassert>

int Sum(int a, int b)
{
  return a+b;
}

void RightAnswer()
{ 
  std::cout<< "RightAnswer";
  assert(Sum(5, 5) == 10);   
}
void WrongAnswer()
{
  std::cout<< "WrongAnswer";
  assert(Sum(5, 22) == 10);   
}


int main()
{
  
  RightAnswer();
  WrongAnswer();
  return 0;
}
