#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  int x;
  cin >> x;
 
 
 
 int r1 = x % 1000; //234
  int r1_1 = r1 / 100; // 2
  int r1_3 = r1 % 10; // 4
  int r1_23 = r1 % 100; // 34
  int r1_2 = r1_23 / 10;
  // cout << r1_1 << endl; // 2
  // cout << r1_2 << endl; // 
  // cout << r1_3 << endl; // 
  int r2 = x / 10; // 123
  int r2_1 = r2 / 100; // 1
  int r2_3 = r2 % 10; // 3
  int r2_23 = r2 % 100; // 23
  int r2_2 = r2_23 / 10;
  // cout << r2_1 << endl; // 2
  // cout << r2_2 << endl; // 2
  // cout << r2_3 << endl; // 2   

   if((r1_1 == r1_2 && r1_2 == r1_3)|| (r2_1 == r2_2 && r2_2 == r2_3)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}