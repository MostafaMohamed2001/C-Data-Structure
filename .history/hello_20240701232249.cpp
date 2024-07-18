#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool solvedProblems[26] = {false};  // Initialize all to false
        int balloons = 0;
        
        for (char problem : s) {
            int index = problem - 'A';
            if (!solvedProblems[index]) {
                // First time solving this problem
                solvedProblems[index] = true;
                balloons += 2;
            } else {
                // This problem was already solved before
                balloons += 1;
            }
        }
        
        cout << balloons << endl;
    }
    
    return 0;
}
