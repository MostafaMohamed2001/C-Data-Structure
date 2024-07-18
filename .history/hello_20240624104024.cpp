#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      string comb = s[i] + s[j];
      brea
    }
  }
  // string str;
  //   cout << "Enter a string: ";
  //   cin >> str;

  //   bool isPalindrome = true;
  //   int n = str.length();

  //   for (int i = 0; i < n / 2; ++i) {
  //       if (str[i] != str[n - 1 - i]) {
  //           isPalindrome = false;
  //           break;
  //       }
  //   }

  //   if (isPalindrome) {
  //       cout << str << " is a palindrome." << endl;
  //   } else {
  //       cout << str << " is not a palindrome." << endl;
  //   }

  //   return 0;
}
