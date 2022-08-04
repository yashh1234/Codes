#include <iostream>

using namespace std;

int main() {
  int val, num, count = 0;
  int sum = 0;
  cout << "Enter the number: " << endl;
  cin >> num;
  val = num;

  while (num > 0 || sum > 9) {
    if (num == 0) {
      num = sum;
      sum = 0;
    }
    sum = sum + num % 10;
    num = num / 10;
  }

  cout << sum << endl;
}