#include <iostream>

enum class season {spring, summer, autumn, winter};

struct local_season {
  season current;
  std::string spring;
  std::string summer;
  std::string autumn;
  std::string winter;

  local_season(season cur, const std::string& spr, const std::string& sum, const std::string& aut, const std::string& win)
  {
    current = cur;
    spring = spr;
    summer = sum;
    autumn = aut;
    winter = win;
  }
};

std::ostream& operator<<(std::ostream& out, local_season& s)
{
  switch (s.current) {
  case season::spring:
    return out << s.spring;
  case season::summer:
    return out << s.summer;
  case season::autumn:
    return out << s.autumn;
  case season::winter:
    return out << s.winter ;
  }
  return out;
}

season operator++(season& s)
{
  switch (s) {
  case season::spring:
    return season::summer;
  case season::summer:
    return season::autumn;
  case season::autumn:
    return season::winter;
  case season::winter:
    return season::spring;
  }
}

local_season operator++(const local_season& s)
{
  local_season ret = s;
  ret.current = ++ret.current;
  return ret;
}

int main()
{
  local_season s{season::summer, "spring", "summer", "autumn", "winter"};
  local_season next = ++s;
  std::cout << "the next season from summer is: " << next << std::endl;
  return 0;
}
