#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
  char question[] = "Please, enter your firstname: ";
 char greeting[] = "Hello, ";
 char yourname [80];
 cout << question;
 cin >> yourname;
 cout << greeting << yourname << "!"; 
}
