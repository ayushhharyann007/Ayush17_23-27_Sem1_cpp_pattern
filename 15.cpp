//Implement a program that generates a pattern of a pyramid using nested loops.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars for the current row
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        // Move to the next line for the next row
        cout << endl;
    }

    return 0;
}
