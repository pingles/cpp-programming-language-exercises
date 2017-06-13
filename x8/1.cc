int main()
{
  char a{'a'};
  
  char* pa{&a};    // pointer to character
  int x[10];       // array of 10 ints
  char** ppa{&pa}; // pointer to pointer to character
  
  int life = 42;
  const int y{life};     // constant int
  const int* cy{&y};     // pointer to constant int
  int *const yc = &life; // constant pointer to int
  
  return 0;
}