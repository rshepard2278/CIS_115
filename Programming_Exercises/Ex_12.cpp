/*
*Author: Richard Shepard
*Purpose: Calculate average rainfall for 3 months
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void getUserInput(string[], double[], int size);
double calculateAverage(double[], int size);
void displayData(string [], double);

int main()
{   
    int size = 3;
    string months[size];
    double rainFall[size];
    double averageRainFall;
    
    getUserInput(months, rainFall, size);
    averageRainFall = calculateAverage(rainFall, size);
    displayData(months, averageRainFall);

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}

void getUserInput(string months[], double rainFall[], int size) {    
    for(int i = 0; i < size; i++) {
        cout << "Please input the month: ";
        cin >> months[i];
        cout << "Please input the rainfall amout in inches: ";
        cin >> rainFall[i];   
    }
}

double calculateAverage(double rainFall[], int size) {
    double average;
    for(int i = 0; i < size; i++) {
        average += rainFall[i];
    }
    return (average / size);
}

void displayData(string months[], double average) {
    cout << "The average rainfall for " << months[0] << ", " << months[1] << ", and " <<
            months[2] << " is " << average << " inches." << endl;
}
