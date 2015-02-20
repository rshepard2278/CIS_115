/*
*    Author: Richard Shepard
*    Purpose: Temperature Converter C to F
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

float centigradeToFahernheit(float);

int main()
{
    float tempC = -100;
    float tempF;
    
    tempF = centigradeToFahernheit(tempC);
    cout << tempC << "C degrees is " << tempF << "F degrees Faherheit." << endl;    

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}

float centigradeToFahernheit(float tempC) {
    float tempF = ((9.0/5.0) * tempC) + 32;
    return tempF;   
}
