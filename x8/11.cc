#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

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
  

  std::sort(words.begin(), words.end(), [](std::string a, std::string b) { return a < b;});
  for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); it++) {
    if (it != words.begin() && *it == *(it-1))
      continue;
    std::cout << *it << std::endl;
  }
  
  return 0;
}