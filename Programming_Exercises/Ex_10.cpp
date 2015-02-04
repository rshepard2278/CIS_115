/*
*Author: Richard Shepard
*Purpose: Ex#7
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool verifyPositiveDouble(double number) {
    bool isPositive = false;
    if(number >= 0) {
        isPositive = true;
    } else {
        cout << "Please enter a positive number...." << endl;
    }
    return isPositive;   
}

int main()
{
    double capacity = 12;
    double milesTraveled = 350;
    
    do {
        cout << "Please enter the number of gallons: ";
        cin >> capacity;
    } while (!verifyPositiveDouble(capacity));
    
    do {
        cout << "Please enter the number of miles driven: ";
        cin >> milesTraveled;
    } while (!verifyPositiveDouble(milesTraveled));
    
    double mpg = (milesTraveled / capacity);
    
    cout << "\nYour MPG is: " << mpg << endl;

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}
