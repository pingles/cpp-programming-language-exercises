#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter your name: ";
    string name{""};
    cin >> name;

    cout << "Please enter your age: ";
    int age = 0;
    cin >> age;

    cout << "Hello, " << name << ", you're " << age << " years old" << endl;

    return 0;
}
