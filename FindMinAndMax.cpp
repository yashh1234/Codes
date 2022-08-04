#include <iostream>

using namespace std;

int main() {
  int arr[6] = {5, 7, 1, 0, 9};
  int n = 6;

  int currMin = arr[0];
  int currMax = arr[0];

  for (int i = 0; i < n; i++) {
    // Max element
    if (arr[i] > currMax) {
      currMax = arr[i];
    }

    // Min element
    if (arr[i] < currMin) {
      currMin = arr[i];
    }
  }

  cout << "Max: " << currMax << endl;
  cout << "Min: " << currMin << endl;
  return 0;
}