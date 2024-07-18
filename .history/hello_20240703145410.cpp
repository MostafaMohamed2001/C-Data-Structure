#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };

    cout<<"Traversing the array with foreach using array's data type: ";
    for (int x : arr)
        cout<<x<<" ";
    return 0;
}