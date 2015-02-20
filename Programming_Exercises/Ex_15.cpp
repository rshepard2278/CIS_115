/*
*    Author: Richard Shepard
*    Purpose: Temperature Converter with user input
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

float centigradeToFahernheit(float);
float fahernheitToCentigrade(float);
void displayConversion(char, float);

int main()
{
    char tempType;
    float unknownTemp;
    
    cout << "Please input the temperature : ";
    cin >> unknownTemp;
    cout << "Please input the scale (C or F): ";
    cin >> tempType;
    
    displayConversion(tempType, unknownTemp);

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}

void displayConversion(char type, float temp) {
    type = tolower(type);
    float tempF;
    float tempC;
    if(type == 'c') {
        tempF = centigradeToFahernheit(temp);
        cout << temp << "c is " << tempF << " degrees Fahrenheit." << endl;
    } else {
        tempC = fahernheitToCentigrade(temp);
        cout << temp << "f is " << tempC << " degress Celsius." << endl;
    }
}

float centigradeToFahernheit(float tempC) {
    float tempF = ((9.0/5.0) * tempC) + 32;
    return tempF;   
}

float fahernheitToCentigrade(float tempF) {
    float tempC = (tempF - 32) * 5.0/9.0;
    return tempC;   
}

