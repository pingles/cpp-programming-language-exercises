#include <limits>
#include <iostream>

int main()
{
  std::cout 
    << "smallest bool: " << std::numeric_limits<bool>().min()
    << ", largest: " << std::numeric_limits<bool>().max()
    << ", num chars: " << sizeof(bool) / sizeof(char)
    << ", align: " << alignof(bool)
    << std::endl;

  std::cout 
    << "smallest char: " << std::numeric_limits<char>().min()
    << ", largest: " << std::numeric_limits<char>().max()
    << ", num chars: " << sizeof(char) / sizeof(char)
    << ", align: " << alignof(char)
    << std::endl;

  std::cout 
    << "smallest short: " << std::numeric_limits<short>().min()
    << ", largest: " << std::numeric_limits<short>().max()
    << ", num chars: " << sizeof(short) / sizeof(char)
    << ", align: " << alignof(short)
    << std::endl;

  std::cout 
    << "smallest int: " << std::numeric_limits<int>().min()
    << ", largest: " << std::numeric_limits<int>().max()
    << ", num chars: " << sizeof(int) / sizeof(char)
    << ", align: " << alignof(int)
    << std::endl;

  std::cout 
    << "smallest long: " << std::numeric_limits<long>().min()
    << ", largest: " << std::numeric_limits<long>().max()
    << ", num chars: " << sizeof(long) / sizeof(char)
    << ", align: " << alignof(long)
    << std::endl;

  std::cout 
    << "smallest long long: " << std::numeric_limits<long long>().min()
    << ", largest: " << std::numeric_limits<long long>().max()
    << ", num chars: " << sizeof(long long) / sizeof(char)
    << ", align: " << alignof(long long)
    << std::endl;

  std::cout 
    << "smallest float: " << std::numeric_limits<float>().min()
    << ", largest: " << std::numeric_limits<float>().max()
    << ", num chars: " << sizeof(float) / sizeof(char)
    << ", align: " << alignof(float)
    << std::endl;

  std::cout 
    << "smallest double: " << std::numeric_limits<double>().min()
    << ", largest: " << std::numeric_limits<double>().max()
    << ", num chars: " << sizeof(double) / sizeof(char)
    << ", align: " << alignof(double)
    << std::endl;

  std::cout 
    << "smallest unsigned: " << std::numeric_limits<unsigned>().min()
    << ", largest: " << std::numeric_limits<unsigned>().max()
    << ", num chars: " << sizeof(unsigned) / sizeof(char)
    << ", align: " << alignof(unsigned)
    << std::endl;

  std::cout 
    << "smallest unsigned long: " << std::numeric_limits<unsigned long>().min()
    << ", largest: " << std::numeric_limits<unsigned long>().max()
    << ", num chars: " << sizeof(unsigned long) / sizeof(char)
    << ", align: " << alignof(unsigned long)
    << std::endl;

  return 0;
}