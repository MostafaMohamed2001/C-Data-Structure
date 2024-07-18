#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(char c : str){
        if(c == 'a' ||  c == 'e' || c == 'u' || c == 'o' || c == 'i' ||c == 'y' ||  c == 'A' ||  c == 'E' || c == 'U' || c == 'O' || c == 'I'){
        continue;}else{
            cout << '.' << c;
        }
    }
    return 0;
}
