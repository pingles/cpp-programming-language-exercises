#include <iostream>
#include <thread>
#include <chrono>

void say(std::string word)
{
  while (true)
  {
    std::cout << word << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

int main()
{
  std::thread hello(say, "hello");
  std::thread world(say, "world!");
  
  hello.join();
  world.join();
  
  return 0;
}