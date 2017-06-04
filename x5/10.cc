#include <fstream>
#include <iostream>

using char_iter = std::istream_iterator<char>;

int main(int argc, char* argv[])
{
  std::ifstream in{argv[1]};
  char_iter it{in>>std::noskipws};
  std::ostream_iterator<char> out{std::cout};
  
  std::copy(it, char_iter(), out);

  return 0;
}