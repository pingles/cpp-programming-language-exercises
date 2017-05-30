#include <iostream>

using namespace std;

class Person
{
public:
  int age;
  string name;
  Person() {};
};

ostream& operator<<(ostream& out, const Person& person)
{
  return out << "Hello " << person.name << ", you are " << person.age << " years old!" << endl;
}

istream& operator>>(istream& in, Person& person)
{
  return in >> person.name >> person.age;
}

int main()
{
  Person p;
  cout << "Please enter your name and age: ";
  cin >> p;
  cout << p;

  return 0;
}
