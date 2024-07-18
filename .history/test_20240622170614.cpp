#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int count;
    cin >> count;
    cin >> s;

    for (int i = 0; i < count;; i++)
    {
      if (s[i] == 'M' && (s[i + 1] != 'F' || s[i + 1] != ' '))
      {
        cout << "No";
        return 0;
      }
    }

    cout << "Yes";
    return 0;
}
