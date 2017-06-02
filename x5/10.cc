#include <fstream>
#include <iostream>

int main(int argc, char* argv[])
{
  std::ifstream in{argv[1]};
  char c = in.getline();
  while (in.good())
  {
    std::cout << c;
    c = in.getline();
  }
  in.close();
  return 0;
}