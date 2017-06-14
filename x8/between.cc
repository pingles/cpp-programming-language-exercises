#include "between.h"

int between(const char* start, const char* end)
{
  if (start == end) {
    return 0;
  }
  
  int count = 0;
  for (auto i = start; i != end; i++) {
    count++;
  }
  return count;
}
