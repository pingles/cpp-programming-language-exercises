#include <fstream>
#include <iostream>

int main(int argc, char* argv[])
{
  std::ifstream in{argv[1]};
  
  for (std::string s; in>>s;) {
    std::cout << s << std::endl;
  }
  in.close();
  return 0;
}