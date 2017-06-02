#include <fstream>

int main(int argc, char* argv[])
{
  std::ofstream out{argv[1]};
  for (int i = 0; i < 10000; i++) {
    out << i << std::endl;
  }
  return 0;
}