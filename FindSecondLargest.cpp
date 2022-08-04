#include <climits>
#include <iostream>

using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 10;

  int currMin = arr[0];
  int largest = INT_MIN;
  int secondLargest = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] < largest) {
      secondLargest = arr[i];
    }

    if (arr[i] < currMin) {
      currMin = arr[i];
    }
  }
  cout << "Second largest: " << secondLargest << endl;
  cout << "Minimum " << currMin << endl;
  return 0;
}