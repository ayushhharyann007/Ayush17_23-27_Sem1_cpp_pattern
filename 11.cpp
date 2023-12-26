//Write a C++ program to check if a number is prime or composite.

#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1) {
        cout << "Neither prime nor composite." << endl;
    } else {
        bool isPrime = true;
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is a composite number." << endl;
        }
    }

    return 0;
}
