#include <iostream>

void swap(int* a, int* b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swap(int& a, int& b)
{
  int& tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int a = 10;
  int b = 42;
  
  std::cout << "pointers\n";
  std::cout << &a << " " << a << " " << &b << " " << b << std::endl;
  swap(&a, &b);
  std::cout << &a << " " << a << " " << &b << " " << b << std::endl;
  
  std::cout << "references\n";
  int& ar = a;
  int& br = b;
  std::cout << &ar << " " << ar << " " << &br << " " << br << std::endl;
  swap(ar, br);
  std::cout << &ar << " " << ar << " " << &br << " " << br << std::endl;
  
  return 0;
}