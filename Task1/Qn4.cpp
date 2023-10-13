//     4. Write a C++ program to print whether a number is a hill number or not. 
// Note: Assume that a Hill Number is a natural number that has digits in asc order followed by digits in desc order where consecutive digits are not the same i.e. the number has a peak and an asc slope and desc slope. 
// Example: 
// Hill Number: 147521, 23454 
// Not Hill Number: 1, 12, 22, 12334, 123212321

#include <iostream>
using namespace std;

bool isHillNumber(int num) {
    int prev = -1;
    bool asc = true;
    bool desc = false;

    while (num > 0) {
        int digit = num % 10;

        if (digit == prev) {
            return false;  // Consecutive digits are the same; not a Hill Number.
        }

        if (digit > prev) {
            asc = true;
            if (desc) {
                return false;  // There shouldn't be asc digits after desc ones.
            }
        } else if (digit < prev) {
            desc = true;
            if (!asc) {
                return false;  // There shouldn't be desc digits before asc ones.
            }
        }

        prev = digit;
        num /= 10;
    }

    return asc && desc;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isHillNumber(num)) {
        cout << num << " is a Hill Number." << endl;
    } else {
        cout << num << " is not a Hill Number." << endl;
    }

    return 0;
}
