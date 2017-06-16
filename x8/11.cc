#include <iostream>
#include <vector>
#include <map>

int main()
{
  std::vector<std::string> words;
  std::string word;
  
  while (std::cin >> word) {
    if (word == "Quit")
      break;
    
    words.push_back(word);
  }
  
  std::map<std::string,char> seen;
  for (auto w : words) {
    if (seen[w] > 0) {
      continue;
    }
    std::cout << w << std::endl;
    seen[w]++;
  }
  
  return 0;
}