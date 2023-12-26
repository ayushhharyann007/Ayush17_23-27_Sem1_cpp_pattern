//Create a program to check if a given string is a palindrome.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    // Make a copy of the input string and reverse it
    string reversed = input;
    reverse(reversed.begin(), reversed.end());

    // Compare the original string with the reversed string
    if (input == reversed) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
