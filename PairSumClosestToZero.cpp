#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

void sumPair(int arr[], int n) {
  int sum, min_sum = INT_MAX;

  int s = 0, e = n - 1;

  int min_s = s, min_e = e;

  if (n < 2) {
    cout << "Invalid input";
    return;
  }

  sort(arr, arr + n);

  while (s < e) {
    sum = arr[s] + arr[e];

    if (abs(sum) < abs(min_sum)) {
      min_sum = sum;
      min_s = s;
      min_e = e;
    }
    if (sum < 0) {
      s++;
    } else {
      e--;
    }
  }

  cout << "The elements whose sum is closest to zero are: " << arr[min_s]
       << " and " << arr[min_e];
}

int main() {
  int arr[6] = {3, 4, 2, 8, 1, 1};
  int n = 6;
  sumPair(arr, n);
  return 0;
}