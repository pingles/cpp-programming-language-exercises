#include <iostream>


// create a structure containing:
// bool          1 char
// char          1 char
// int           4 chars
// long          8 chars
// double        8 chars
// long double   16 chars
//
// need to create smallest and largest struct.
// x7/8 showed sizeof()
//
// chars are 1 byte

// actual sum of size: 38 bytes

struct largest {
  bool a;
  long double b;
  char c;
  double d;
  int e;
  long f;
};

struct smallest {
  long double a; // 16 bytes
  double b;      // 8 bytes
  long c;        // 8 bytes
  int d;         // 4 bytes
  char e;        // 1 byte
  bool f;        // 1 byte
  // we're left with 10 bytes of padding
  // to align given largest member uses
  // 16 bytes.
  // so total size = 38 bytes + 10 bytes = 48 bytes
};

int main()
{
  std::cout << "Largest:" << sizeof(largest) << std::endl;
  std::cout << "Smallest:" << sizeof(smallest) << std::endl;
  return 0;
}
