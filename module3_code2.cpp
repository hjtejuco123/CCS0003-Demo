/******************************************************************************
Different Data types
Module3_code2.cpp
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    //declare variables
    int age = 30; //integer data type 
    char grade = 'A'; //character data type 
    float height = 5.9; //floating point data type 
    const double pi = 3.14159; //double data type (const (FIX))
    bool isPassed = true; //Boolean data type 
    
    //print the values (cout())
    cout << "Age " << age << endl;
    cout << "Grade " << grade << endl;
    cout << "Height " << height << endl;
    cout << "Value of PI " << pi << endl;
    cout << "Passed " << (isPassed ? "Yes" : "No") << endl;
    
    return 0;
}
