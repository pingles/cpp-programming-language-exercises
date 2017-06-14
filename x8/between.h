#ifndef BETWEEN_H
#define BETWEEN_H

template<typename T>
int between(const T* start, const T* end)
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

#endif