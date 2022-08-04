#include <iostream>
#include <string>

using namespace std;

int main() {
  string ums = "These um are um my um words.";
  string target = "um ";

  int found = -1;
  do {
    found = ums.find(target, found + 1);
    if (found != -1) {
      ums = ums.substr(0, found) + ums.substr(found + target.length());
    }
  } while (found != -1);

  cout << ums;
  return 0;
}