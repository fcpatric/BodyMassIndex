#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight = 0.0, height = 0.0, bodyMassIndex = 0.0;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bodyMassIndex = weight / (height * height);

    cout << setprecision(2) << fixed << showpoint;
    cout << "Your body mass index is " << bodyMassIndex << " kilograms/meters^2." << endl;

    cout << endl;
    cout << "BMI Values" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal:      between 18.5 and 24.9" << endl;
    cout << "Overweight:  between 25 and 29.9" << endl;
    cout << "Obese:       30 or greater" << endl;

    return 0;
}
