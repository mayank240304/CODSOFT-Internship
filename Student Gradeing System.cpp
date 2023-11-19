#include <iostream>
using namespace std;
int main() 
{
    int numGrades;

    cout<<"Enter the number of grades: ";
    cin>>numGrades;

    if(numGrades <= 0) {
        cout << "Invalid number of grades Exiting." << endl;
        return 1;
    }

    double average = 0.0;
    double highest = -1.0; // Initialize to a lower value
    double lowest = 101.0; // Initialize to a higher value

    for (int i = 0; i < numGrades; ++i) {
        double grade;

        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grade;

        average += grade;

        if (grade > highest) {
            highest = grade;
        }

        if (grade < lowest) {
            lowest = grade;
        }
    }

    average /= numGrades;

    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}