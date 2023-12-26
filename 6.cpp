//Create a program to calculate the power of a number using a loop.

#include <iostream>

using namespace std;

int main() {
    double base, exponent, result = 1;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the power using a loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << "Result: " << result << endl;

    return 0;
}
