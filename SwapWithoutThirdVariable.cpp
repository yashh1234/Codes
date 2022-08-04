#include <iostream>

using namespace std;

int main() {
  int x, y;
  x = 5;
  y = 6;

  cout << "Before swapping x: " << x << " y: " << y << endl;

  // Swap
  x = x + y; // 11 (5 + 6)
  y = x - y; // 5 (11 - 6)
  x = x - y; // 6 (11 - 5)

  cout << "After swapping x: " << x << " y: " << y << endl;
  return 0;
}