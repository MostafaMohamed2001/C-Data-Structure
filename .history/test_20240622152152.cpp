#include<iostream>
#include<iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

  int n;
  cin >> n;
  int num;
  bool spa = false;
  // int n = s.size();
  while (n)
  {
     int number;
        cin >> number;
        if (number % 2 == 0) {
            if (!first) {
                cout << " ";
            }
            cout << number;
            first = false;
        }
        n--
  }
}