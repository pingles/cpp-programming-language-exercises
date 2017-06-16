#include <iostream>

int count_pairs(const std::string& s) {
  int pairs{0};
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1])
      pairs++;
  }
  return pairs;
}

int count_pairs(const char* start, int size) {
  int pairs{0};
  for (auto s = start+1; *s != '\0'; s++) {
    if (*s-1 == *s)
      pairs++;
  }
  return pairs;
}

int main()
{
  std::string s{"xabaacbaxabb"};
  std::cout << "ab pairs: " << count_pairs(s) << std::endl;
  
  const char cs[] = "xabaacbaxabb";
  std::cout << "ab pairs: " << count_pairs(cs) << std::endl;
  
  return 0;
}