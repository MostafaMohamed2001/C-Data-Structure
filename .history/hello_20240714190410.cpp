#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int isLast = n-1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    sort(arr, arr + n);

       cout << "Array elements: ";
    for (int elem : arr) {
        if(! isLast){
        cout << elem << " ";
        }else{
            cout<<
        }
    }

}
