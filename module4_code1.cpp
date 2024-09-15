/******************************************************************************
cout(); << - Insertion Operator 

cout << varName;
cout << "Hello world";
int result = 10;
cout << "The result is " << result << endl;

Input operator 
cin(); -> input data  >> - Extractor Operator 
cin >> varName;

*******************************************************************************/
//ask the user to input age and display the value of the age
#include <iostream>
using namespace std;
int main()
{
    int age;  //var declaration of the age 
    //ask the user to enter the age 
    //prompt (display)
    cout << "Enter your age: "; 
    cin >> age; 
    cout << "You entered: " << age << endl;
    return 0;
}
