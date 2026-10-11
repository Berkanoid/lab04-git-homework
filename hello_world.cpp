#include <iostream>
#include <string>
int
main()
{
  // Read the user's name.
  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  // Print a personal greeting.
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
