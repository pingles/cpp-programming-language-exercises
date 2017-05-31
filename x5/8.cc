#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> pv{"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};

  cout << "Unsorted..." << endl;
  for (string s : pv)
    cout << s << endl;

  sort(pv.begin(), pv.end());
  cout << "Sorted..." << endl;
  for (string s : pv)
    cout << s << endl;

  return 0;
}
