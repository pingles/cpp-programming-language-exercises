#include <iostream>

int main()
{
  // char arrays are zero byte terminated, so this
  // has 15 chars
  const char str[] = "a short string";
  std::cout << "sizeof str[]: " << sizeof(str) << std::endl;
  
  // std::string is not, however, so have a size of 14
  // but a larger sizeof.
  const std::string s{"a short string"};
  std::cout << "size " << s.size() << " sizeof s " << sizeof(s) << std::endl;
  
  return 0;
}