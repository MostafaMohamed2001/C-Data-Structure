#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1 , dima_count = 0 , serja_count=0;
    bool serja_trun = true;

    while (left <= right) {

        if(arr[left] > arr[right]){
            if(serja_trun)
                se
            else
                serja += right - left;

        }



    }
}
