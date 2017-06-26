#include <iostream>

enum class season {spring, summer, autumn, winter};
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

  local_season next();
};

local_season local_season::next()
{
  local_season ret = *this;
  ret.current = ++ret.current;
  return ret;
}

std::ostream& operator<<(std::ostream& out, const local_season& s)
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

int main()
{
  local_season s{season::summer, "spring", "summer", "autumn", "winter"};
  std::cout << "the next season from summer is: " << s.next() << std::endl;
  return 0;
}
