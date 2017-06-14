#include <iostream>
#include "between.h"

int main()
{
  const int ints[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  std::cout << between<int>(&ints[1], &ints[12]) << " ints between 1 and 12.\n";
  
  return 0;
}