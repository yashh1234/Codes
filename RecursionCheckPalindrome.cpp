#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string &str, int i, int j) {
  // Base case
  if (i > j) {
    return true;
  }

  if (str[i] != str[j]) {
    return false;
  } else {
    return checkPalindrome(str, i + 1, j - 1);
  }
}

int main() {
  string name = "abba";
  cout << endl;
  bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

  if (isPalindrome) {
    cout << "It's a palindrome";
  } else {
    cout << "It's not a palindrome";
  }
  return 0;
}
