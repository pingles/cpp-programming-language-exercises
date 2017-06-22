#include <iostream>
#include <chrono>

int count_pairs(const std::string& s) {
  int pairs{0};
  for (auto i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1])
      pairs++;
  }
  return pairs;
}

int count_pairs_pointer(const char start[]) {
  int pairs{0};
  for (auto s = start+1; *s != 0; s++) {
    if (*(s-1) == *s)
      pairs++;
  }
  return pairs;
}

int count_pairs_index(const char s[]) {
  int pairs{0};
  for (auto i = 1; s[i] != 0; i++) {
    if (s[i-1] == s[i])
      pairs++;
  }
  return pairs;
    + 1;
}

int main()
{
  std::string s{"xabaacbaxabb"};

  for (int i = 0; i < 100000; i++) {
    auto start = std::chrono::high_resolution_clock::now();
    auto pairs = count_pairs(s);
    auto stop = std::chrono::high_resolution_clock::now();
    std::cout << "string::operator[]," << i << "," << pairs << "," << std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count() << std::endl;
  }

  const char cs[] = "xabaacbaxabb";

  for (int i = 0; i < 100000; i++) {
    auto start = std::chrono::high_resolution_clock::now();
    auto pairs = count_pairs_pointer(cs);
    auto stop = std::chrono::high_resolution_clock::now();
    std::cout << "pointer," << i << "," << pairs << "," << std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count() << std::endl;
  }

  for (int i = 0; i < 100000; i++) {
    auto start = std::chrono::high_resolution_clock::now();
    auto pairs = count_pairs_index(cs);
    auto stop = std::chrono::high_resolution_clock::now();
    std::cout << "indexer," << i << "," << pairs << "," << std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count() << std::endl;
  }

  return 0;
}
