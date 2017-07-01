#include <iostream>

constexpr int MAX_LENGTH = 10;

int main()
{
  int i = 0;
  int max_length = 25;
  int quest_count = 0;
  char input_line[] = {"Hello? Are you there?"};

  // for loop from exercise statement
  for (i = 0; i != max_length; i++) {
    if (input_line[i] == '?')
      quest_count++;
  }
  std::cout << quest_count << " questions" << std::endl;

  quest_count = 0;
  i = 0;

  // rewrite to a while loop
  while (i++ != max_length) {
    if (input_line[i] == '?')
      quest_count++;
  }
  std::cout << quest_count << " questions" << std::endl;

  quest_count = 0;
  i = 0;

  // rewritten to use pointer
  char* p = input_line;
  while (*p++) {
    if (*p == '?')
      quest_count++;
  }
  std::cout << quest_count << " questions" << std::endl;

  quest_count = 0;

  // rewritten to use range
  for (auto c : input_line) {
    if (c == '?')
      quest_count++;
  }
  std::cout << quest_count << " questions" << std::endl;

  return 0;
}
