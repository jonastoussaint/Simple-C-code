//*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//*Author: Jonas Toussaint                                      +
//*Assignment: KrustyKrabsCalculator                            +
//*Description: Create a Calculator that will allow squidward   +
//*calculate the total of price of the orders made by customers.+
//*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Defined Varibles 
    int numPatty, numKelpShakes, numFries, numChecks;
    double total, subTotal, tax, pattyPrice=3.69, friesPrice=1.89, kelpShakePrice=2.65, salesTax= 1.8;
    
    cout << "Hello!. Welcome to the Krusty Krab" << endl;
        
    cout << "Enter the number of Krabby Patties:" << endl;
    cin >> numPatty;
    
    cout << "Enter the number of Kelp Shakes:" << endl;
    cin >> numKelpShakes;
    
    cout << "Enter the number of Fries: " << endl;
    cin >> numFries;
    
    cout << "Enter the number of checks for this order: "<< endl;
    cin >> numChecks;
    
    //Arithmetic
    
    //This is the Algorithm that will calculate the subtotal.
    subTotal = (numPatty * pattyPrice) + (numFries * friesPrice) + (numKelpShakes * kelpShakePrice);
    
    //The is the algorithm that will calculate the tax.
    tax = ((salesTax * subTotal) / 100); 
    
    //The is the algorithm that will calculate the grand total.
    total = (tax + subTotal) / numChecks;
    cout << "Your total, for each check is: $ " << setprecision(4) << total << endl;
    
    return 0;
}





















