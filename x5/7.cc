#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v{5, 9, -1, 200, 0};

  cout << "Unsorted..." << endl;

  for (int i : v)
    cout << i << endl;

  sort(v.begin(), v.end());

  cout << "Sorted..." << endl;

  for (int i : v)
    cout << i << endl;

  return 0;
}
