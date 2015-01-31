/*
*Author: Richard Shepard
*Purpose: Ex# 6
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    const double SALES_TAX = 0.06;
    double taxDue = 0;
    double purchase = 52.00;
    double total = 0;
    
    taxDue = (purchase * SALES_TAX);
    total = (taxDue + purchase);
    
    cout << "Purchase:          $" << purchase << endl;
    cout << "Tax:                $" << taxDue << endl;
    cout << "Total:             $" << total << endl;
    

    cout << "\n\n\n";
    system("PAUSE");
    return 0;
}
