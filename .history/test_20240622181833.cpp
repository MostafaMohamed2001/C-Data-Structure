#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, q1, q2;
  cin >> n >>  q1 >> q2;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  
   if((q1 + q2) == a[0]){
     cout << a[0 + 1];
   }else if ((q1 + q2) == a[1]){
     cout << a[1 + 1];
   }else{
     cout << a[2 + 1];
   }
}
