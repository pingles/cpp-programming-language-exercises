#include <iostream>

class Person
{
public:
  int age;
  std::string name;
  Person() {};
};

std::ostream& operator<<(std::ostream& out, const Person& person)
{
  return out << "Hello " << person.name << ", you are " << person.age << " years old!" << std::endl;
}

std::istream& operator>>(std::istream& in, Person& person)
{
  return in >> person.name >> person.age;
}

int main()
{
  Person p;
  std::cout << "Please enter your name and age: ";
  std::cin >> p;
  std::cout << p;

  return 0;
}
