#include <iostream>

int main()
{
  std::cout << "type\tsize\talign\n";

  std::cout << "char*" << "\t" << sizeof(char*) << "\t" << alignof(char*) << std::endl;
  std::cout << "int*" << "\t" << sizeof(int*) << "\t" << alignof(int*) << std::endl;
  std::cout << "void*" << "\t" << sizeof(void*) << "\t" << alignof(void*) << std::endl;
  
  return 0;
}

// produces:
// type  size  align
// char*  8  8
// int*  8  8
// void*  8  8
//
// 64-bit architecture. pointers are of the same size- so everything
// has to be placed at addresses as multiples of 8.
// some computer architectures wouldn't have such constraints and so
// you could have odd values for align (even if size is still the same)?