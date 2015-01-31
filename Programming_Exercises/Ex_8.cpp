/*
*Author: Richard Shepard
*Purpose: Ex# 8
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string address;
    string city;
    string state;
    string major;
    string phoneNum;
    string zip;
    
    
    cout << "What is your name : ";
    getline (cin, name);
    system("CLS");
    
    cout << "What is your address : ";
    getline (cin, address);
    system("CLS");
    
    cout << "What is your city : ";
    getline (cin, city);
    system("CLS");
    
    cout << "What is your state : ";
    getline (cin, state);
    system("CLS");
    
    cout << "What is your zip : ";
    getline (cin, zip);
    system("CLS");
    
    cout << "What is your phone number: ";
    getline (cin, phoneNum);
    system("CLS");
    
    cout << "What is your major : ";
    getline (cin, major);
    system("CLS");
    
   
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << ",  " << zip << endl;
    cout << phoneNum << endl;
    cout << "Major: " << major << endl;

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}
