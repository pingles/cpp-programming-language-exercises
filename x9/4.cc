#include <iostream>

struct date {
  int year;
  int month;
  int day;

  date() {};
  date(int y, int m, int d)
  {
    year = y;
    month = m;
    day = d;
  }

  friend std::ostream& operator<<(std::ostream& out, const date& dt);
  friend std::istream& operator>>(std::istream& in, date& dt);
};

std::ostream& operator<<(std::ostream& out, const date& dt)
{
  out << dt.year << "-" << dt.month << "-" << dt.day;
  return out;
}

std::istream& operator>>(std::istream& in, date& dt)
{
  in >> dt.year;
  in.ignore(1, '-');
  in >> dt.month;
  in.ignore(1, '-');
  in >> dt.day;
  return in;
}

int main()
{
  date d{2017, 6, 25};
  std::cout << d << std::endl;

  std::cout << "Enter date YYYY-MM-DD: ";
  date read;
  std::cin >> read;
  std::cout << "You entered: " << read << std::endl;

  return 0;
}
