#include <iostream>

using namespace std;

int main() {
  int arr[9] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
  int n = 9;

  // Count the frequency
  for (int i = 0; i < n; i++) {
    arr[arr[i] % n] = arr[arr[i] % n] + n;
  }
  cout << "The repeating elements are : " << endl;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= n * 2) {
      cout << i << " " << endl;
    }
  }
  return 0;
}
