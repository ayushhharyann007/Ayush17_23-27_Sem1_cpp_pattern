//implement a program that determines the grade of a student based on their marks of 5 subjects.

#include <iostream>

using namespace std;

int main() {
    float marks[5];
    float totalMarks = 500.0;
    float obtainedMarks = 0.0;
    float percentage;
    char grade;

    cout << "Enter marks for 5 subjects:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks entered. Marks should be between 0 and 100." << endl;
            return 1; // Exit with an error code
        }

        obtainedMarks += marks[i];
    }

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;

    return 0;
}
