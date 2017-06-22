#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> v{5, 9, -1, 200, 0};

  std::cout << "Unsorted..." << std::endl;

  for (int i : v)
    std::cout << i << std::endl;

  sort(v.begin(), v.end());

  std::cout << "Sorted..." << std::endl;

  for (int i : v)
    std::cout << i << std::endl;

  return 0;
}
