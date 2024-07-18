#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string S[100]; // Assuming maximum N is 100 as per the problem constraints

    // Read the strings
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    // Check all pairs of strings to see if their concatenation is a palindrome
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i != j) {
                string concatenated = S[i] + S[j];
                int len = concatenated.length();
                bool isPalindrome = true;
                for (int k = 0; k < len / 2; ++k) {
                    if (concatenated[k] != concatenated[len - 1 - k]) {
                        isPalindrome = false;
                        break;
                    }
                }
                if (isPalindrome) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "No" << endl;
    return 0;
}
