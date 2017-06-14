#include <iostream>
#include "between.h"

int main()
{
  const char* chars = "hello, world!";
  
  std::cout << between<char>(&chars[1], &chars[12]) << " chars between 1 and 12.\n";
  
  return 0;
}