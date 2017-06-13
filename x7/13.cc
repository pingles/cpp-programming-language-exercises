// Write a loop printing 4, 5, 9, 17, 12 without an array or vector
#include <iostream>

int main()
{
  for (auto x : {4, 5, 9, 17, 12}) {
    std::cout << x << std::endl;
  }
  return 0;
}