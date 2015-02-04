/*
*Author: Richard Shepard
*Purpose: Execise# 10
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
    
double averageScores(double testScores[], int arraySize) {
    double sum = 0;
    double average = 0;
    for(int i = 0; i < arraySize; i++) {
        sum += testScores[i];
    }
    average = sum / arraySize;
    return average;           
}
    

int main()
{
    const int MAX_SCORES = 5;
    double testScores[MAX_SCORES];
    
    for(int i = 0; i < MAX_SCORES; i++){
        do{
            cout << "Pleas enter a test score: ";
            cin >> testScores[i];
        } while(!verifyPositiveDouble(testScores[i]));            
    }
    
    cout << "Your average is: " << averageScores(testScores, MAX_SCORES);

       
    

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}
