#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

    
int *backP(){
    int x =10;
    return &x;
}

int main(){
    
    int *ptr = backP();
    if(ptr == nullptr){
        cout<<"Null Pointer"<<endl;
    }else{
        cout<<"Not Null Pointer"<<endl;
        cout<<ptr<<endl;
    }
    {}