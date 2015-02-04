/*
*Author: Richard Shepard
*Purpose: Exercise 9
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char star = '*';
    int maxStars = 5;
    
    for(int i = 0; i < maxStars; i++){
        for(int j = 0; j < maxStars; j++){
            if(j <= i) {
                cout << star;
            }
        }
        cout << endl;
    }


    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}
