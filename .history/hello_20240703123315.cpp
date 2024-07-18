#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int str[] = {'a', 'b', 'c', 'd', 'f'};
    str[0] = 'z';
    cout << str << endl;
}
