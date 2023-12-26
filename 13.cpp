// Implement a program to find the GCD of two numbers using a for loop.

#include <iostream>

using namespace std;

int main() {
    int num1, num2, gcd;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers." << endl;
        return 1; // Exit with an error code
    }

    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0;
}

