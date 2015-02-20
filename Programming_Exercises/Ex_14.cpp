/*
*    Author: Richard Shepard
*    Purpose: Temperature Converter F to C
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

float fahernheitToCentigrade(float);

int main()
{
    float tempC;
    float tempF = 212;
    
    tempC = fahernheitToCentigrade(tempF);
    cout << tempF << "F degrees is " << tempC << "C degrees Centigragde." << endl;    

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}

float fahernheitToCentigrade(float tempF) {
    float tempC = (tempF - 32) * 5.0/9.0;
    return tempC;   
}
