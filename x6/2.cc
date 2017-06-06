#include <iostream>
#include <chrono>

int fib(int x)
{
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;
  
  return fib(x-1) + fib(x-2);
}

int main()
{
  auto start = std::chrono::high_resolution_clock::now();
  for (int j = 0; j < 30; j++)
  {
    std::cerr << "fib(" << j << ") = " << fib(j) << std::endl;
  }
  auto stop = std::chrono::high_resolution_clock::now();
  
  std::cout << std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() << std::endl;
  
  return 0;
}