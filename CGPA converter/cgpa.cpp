#include <iostream>

using namespace std;

double cgpaToPercentage(double cgpa) {
    // Assuming a simple conversion formula (example: CGPA * 10)
    double percentage = cgpa * 10;
    return percentage;
}

int main() {
    double cgpa;
    
    cout << "Enter your CGPA: ";
    cin >> cgpa;

    if (cgpa >= 0 && cgpa <= 10) {
        double percentage = cgpaToPercentage(cgpa);
        cout << "Your equivalent percentage is: " << percentage << "%" << endl;
    } else {
        cout << "Invalid CGPA. Please enter a CGPA between 0 and 10." << endl;
    }

    return 0;
}