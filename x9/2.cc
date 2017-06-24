#include <iostream>

const int MAX_NAME_SIZE = 10;

struct month {
  char name[MAX_NAME_SIZE];
  int days;
};

int main()
{
  const char months[][MAX_NAME_SIZE] = {
    {"January"},
    {"February"},
    {"March"},
    {"April"},
    {"May"},
    {"June"},
    {"July"},
    {"August"},
    {"September"},
    {"October"},
    {"November"},
    {"December"}
  };
  const int days[] = {
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31
  };
  for (auto i = 0; i < 12; i++) {
    std::cout << months[i] << " " << days[i] << " days" << std::endl;
  }

  std::cout << "As structs...\n";

  const month monthsS[] = {
    month{"January", 31},
    month{"February", 28},
    month{"March", 31},
    month{"April", 30},
    month{"May", 31},
    month{"June", 30},
    month{"July", 31},
    month{"August", 31},
    month{"September", 30},
    month{"October", 31},
    month{"November", 30},
    month{"January", 31},
  };

  for (auto m : monthsS) {
    std::cout << m.name << " " << m.days << " days" << std::endl;
  }

  return 0;
}
