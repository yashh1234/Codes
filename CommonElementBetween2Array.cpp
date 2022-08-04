#include <iostream>

using namespace std;

int main() {
  int arr1[] = {1, 2, 3, 4};
  int arr2[] = {2, 3, 4, 5};
  int i, j;
  int n = 4;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr1[i] == arr2[j]) {
        cout << arr1[i] << " ";
      }
    }
  }
  return 0;
}
