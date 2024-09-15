/******************************************************************************
Module 3
Module3_code1.cpp
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    //declare variables
    int number = 10; //integer variable 
    const double PI = 3.14159; //constant value for PI variables
    char letter = 'A'; //character variable 
    bool isValid = true;  // boolean variable 
    
    //print or output 
    cout << "Number: " << number << endl;
    cout << "PI: "<< PI << endl;
    cout << "Letter: " << letter << endl;
    cout << "Is Valid " << (isValid ? "True" : "False") << endl;
    
    return 0;
}
