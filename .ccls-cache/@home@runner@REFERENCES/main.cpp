#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void _1();

int main() { _1(); }

void _1() {
  int i = 5;
  std::string str;
  cout << "Enter Line: ";
  std::getline(cin, str);

  // std::ofstream f("~/REFERENCES/test.txt");
  std::ofstream f("test.txt", std::ios::app); // append
  if (!f)
    cout << "No File";

  while (i >= 0) {
    f << str << std::endl;
    i--;
  }
  f.close();
  return;
}