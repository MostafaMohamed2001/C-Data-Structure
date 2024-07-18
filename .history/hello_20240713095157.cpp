#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    int n , a = 0 , d = 0;
    cin>>n;
    string str;
    getline(cin, str);
    for (int i = 0; i < n; i++){
        // if(str[i] == 'A'){
        //     a++;
        // }else{
        //     d++;
        cout<
        }
    }
    if(a > d){
        cout << "Anton"<<endl;
    }else if(d > a){
        cout << "Danik"<<endl;
    }else{
        cout << "Friendship"<<endl;
    }
}
