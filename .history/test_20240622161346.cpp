#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  int n;
  cin >> n;
  string ch;
  while (n--)
  {
    cin >> ch;
    if(ch == "and" || ch == "not" || ch == "that" || ch == "the" || ch == "you"){
        cout<<"Yes"
    }
  }