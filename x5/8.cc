#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> pv{"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};

  std::cout << "Unsorted..." << std::endl;
  for (std::string s : pv)
    std::cout << s << std::endl;

  sort(pv.begin(), pv.end());
  std::cout << "Sorted..." << std::endl;
  for (std::string s : pv)
    std::cout << s << std::endl;

  return 0;
}
