#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1, str2;
  int n1, n2, i, j;
  cout << "Enter first string: " << endl;
  getline(cin, str1);
  cout << "Enter second string: " << endl;
  getline(cin, str2);

  n1 = str1.length();
  n2 = str2.length();

  for (j = 0; j < n2; j++) {
    for (i = 0; i < n1; i++) {
      if (str2[j] == str1[i])
        str1[i] = ' ';
    }
  }

  cout << str1 << endl;
  cout << str2 << endl;
}