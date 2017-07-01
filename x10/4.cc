#include <iostream>
#include <cstring>
#include <math.h>

int patoi(const char in[])
{
  auto length = strlen(in);
  int base = '0';

  int total = 0;
  for (auto i = 0; i < length; i++) {
    total += (in[i] - base) * pow(10,length-i-1);
  }
  return total;
}

int main(int argc, char** argv)
{
  if (argc != 2) {
    std::cout << "please specify the number as the only arg.\n";
    return 1;
  }

  std::cout << patoi(argv[1]) << std::endl;

  return 0;
}
