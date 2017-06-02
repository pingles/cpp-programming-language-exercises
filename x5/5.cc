#include <iostream>

int main()
{
    std::cout << "Please enter your name: ";
    std::string name{""};
    std::cin >> name;

    std::cout << "Please enter your age: ";
    int age = 0;
    std::cin >> age;

    std::cout << "Hello, " << name << ", you're " << age << " years old" << std::endl;

    return 0;
}
