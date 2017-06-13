// 1. Find 5 different C++ constructs for which the meaning is undefined
// 2. Find 5 different C++ constructs for which the meaning is implementation-defined
#include <iostream>
#include <thread>

int main()
{
  // UNDEFINED behaviours
  // implementations have no requirement to behave in particular way.
  
  // undefined: reading beyond array, clang warns with -Warray-bounds
  char x[5];
  std::cout << x[5];

  // undefined: exact value that new returns
  char* p = new char[5];
  
  // undefined: writing to same variable from 2 threads
  // this sometimes prints 1, other times prints 10.
  int sharedx{100};
  std::thread t1([&]() {sharedx = 1;});
  std::thread t2([&]() {sharedx = 10;});
  t1.join();
  t2.join();
  std::cout << "the value of sharedx: " << sharedx << std::endl;
  
  // undefined: dereferencing the nullptr
  // this segfaults for me
  int* xp = nullptr;
  // std::cout << "deref'ed nullptr: " << *xp << std::endl;
  
  // undefined: trying to modify string literal
  // Bus error: 10
  char* sp = "hello, world";
  sp[0] = 'H';
  
  // IMPLEMENTATION DEFINED
  char nx = -10; // chars may be signed or unsigned
  char nx2 = -128; // implementation defined: only if char is signed.
  int xi = 65536 + 1;  // implementation defined: int has to have at least 16 bits but may not have more
  
  // <thread> may be unavailable. not necessary in freestanding implementations
  
  return 0;
}
