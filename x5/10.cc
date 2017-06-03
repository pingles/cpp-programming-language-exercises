#include <fstream>
#include <iostream>

int main(int argc, char* argv[])
{
  std::ifstream in{argv[1]};
  std::istream_iterator<char> it{in>>std::noskipws};
  std::istream_iterator<char> eos;
  std::ostream_iterator<char> out{std::cout};
  
  std::copy(it, eos, out);

  return 0;
}