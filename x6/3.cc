#include <iostream>
#include <random>

const int hist_buckets = 30;

int main()
{
  std::random_device engine{};
  std::normal_distribution<float> rnd{15.0, 3.0};
  
  std::vector<float> histogram(hist_buckets);
  
  for (int i = 0; i < 400; ++i)
    ++histogram[rnd(engine)];
  
  for (int i = 0; i < hist_buckets; ++i)
  {
    std::cout << i << "\t";

    for (int j = 0; j < histogram[i]; ++j)
      std::cout << "*";
    
    std::cout << std::endl;
  }
  
  return 0;
}