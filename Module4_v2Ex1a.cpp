/******************************************************************************
Basic Usage of cin function
ask the user to input the age and salary and display the output

prompt -> message instruction (developer your responsible)
variables age, salary -> (int), (double)
input the data
output 
*******************************************************************************/

#include <iostream>
#include <iomanip> //setprecision() and fixed
using namespace std;
int main()
{
    //declare the variables    
    int age;
    double salary;
    
    //prompt (instruction)
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your salary: ";
    cin >> salary;
    
    //display the result of the input
    cout << "You entered age: " << age << endl;
    cout << "Your salary is: $" << fixed << setprecision(2) << salary << endl;
    
    return 0;
}

