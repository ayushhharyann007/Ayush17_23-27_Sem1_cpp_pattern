//Implement a program to print a Pascal's triangle using nested loops.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number = 1;

        // Print spaces before each number
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            // Print the current number and space after it
            cout << number << "   ";

            // Calculate the next number using the previous number
            number = number * (i - j) / (j + 1);
        }

        // Move to the next line for the next row
        cout << endl;
    }

    return 0;
}

