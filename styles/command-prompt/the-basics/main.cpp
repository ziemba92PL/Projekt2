#include <iostream>

int main(int argc, char *argv[])
{
  if (argc > 1)
  {
    std::cout << "Witaj " << argv[1];
  }
  else
  {
    std::cout << "Usage: a.exe [-imie]\n";
  }

  return 0;
}