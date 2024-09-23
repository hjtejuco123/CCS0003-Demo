/******************************************************************************
iomanip library

setw() - sets width of the input / output
setprecision() - set the number of digits after the decimal point 
fixed - changes the output for floating point numbers 

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num1 = 3.14159;
    double num2 = 123.456;
    double num3 = 1.234;
    
    //set fix and precision(2)
    cout << fixed << setprecision(3); 
    
    //output 
    cout << setw(10) << num1 << endl;
    cout << setw(10) << num2 << endl;
    cout << setw(10) << num3 << endl;

    return 0;
}
