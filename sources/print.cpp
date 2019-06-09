#include <print.hpp>

void print(const std::string& text, std::ostream& out)
{
  int i = 0;
  out << text;
}

void print(const std::string& text, std::ofstream& out)
{
  out << text;
}
