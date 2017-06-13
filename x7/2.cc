#include <iostream>
#include <limits>

int main()
{
  if (std::numeric_limits<char>().is_signed)
    std::cout << "signed" << std::endl;
  else
    std::cout << "unsigned" << std::endl;
  
  return 0;
}