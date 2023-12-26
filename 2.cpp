//Write a C++ program to display the Fibonacci sequence up to N terms.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    int firstTerm = 0, secondTerm = 1;

    cout << "Fibonacci Sequence up to " << n << " terms: ";

    if (n >= 1) {
        cout << firstTerm << " ";
    }

    if (n >= 2) {
        cout << secondTerm << " ";
    }

    for (int i = 3; i <= n; i++) {
        int nextTerm = firstTerm + secondTerm;
        cout << nextTerm << " ";

        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;

    return 0;
}
