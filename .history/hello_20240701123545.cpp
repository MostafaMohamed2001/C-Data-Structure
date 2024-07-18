#include <iostream>
#include <string>
using namespace std;
int main() {
    const int size = 4; // Size of the array
    std::string arr[size] = {"apple", "banana", "cherry", "apple"};
    
    bool no_repeats = true;

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                no_repeats = false;
                break;
            }
        }
        if (!no_repeats) {
            break;
        }
    }

    if (no_repeats) {
        std::cout << "No repeated values in the array." << std::endl;
    } else {
        std::cout << "There are repeated values in the array." << std::endl;
    }

    return 0;
}