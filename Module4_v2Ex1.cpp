/******************************************************************************
Basic Usage of cin function
ask the user to input the age and salary and display the output

prompt -> message instruction (developer your responsible)
variables age, salary -> (int), (double)
input the data
output 
*******************************************************************************/

#include <iostream>
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
    cout << "You entered age: " << age << " and your salary is " << salary << endl;
    
    return 0;
}

