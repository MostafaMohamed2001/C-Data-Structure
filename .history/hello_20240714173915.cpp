#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int sereja_points = 0, dima_points = 0;
    int left = 0, right = n - 1;
    bool sereja_turn = true;

    while (left <= right) {
        cout<<left << "  "
        if (cards[left] > cards[right]) {
            if (sereja_turn) {
                sereja_points += cards[left];
            } else {
                dima_points += cards[left];
            }
            left++;
        } else {
            if (sereja_turn) {
                sereja_points += cards[right];
            } else {
                dima_points += cards[right];
            }
            right--;
        }
        sereja_turn = !sereja_turn;
    }

    cout << sereja_points << " " << dima_points << endl;

    return 0;
}
