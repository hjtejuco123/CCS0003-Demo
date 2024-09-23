/******************************************************************************
given 4500.4567

        4500.46 
truc -  4500.45 
round - 4500.46       

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath> //floor and ceil 
using namespace std;
int main()
{
    double salary;
    
    cout << "Enter your salary: ";
    cin >> salary;

    double truncatedSalary = floor(salary*100)/100;    
    double rountedSalary = ceil(salary*100)/100;
    
    cout << "Formatted Output "<< endl;
    cout << setw(20) << "Original Salary "<<setw(20)<<"Truncated Salary "<<setw(20)<<"Rounded Salary"<<endl;
    cout << "======================================================================================"<<endl;
    
    cout << fixed << setprecision(2);
    
    //display
    cout    << setw(20) <<salary 
            << setw(20) <<truncatedSalary
            << setw(20) <<rountedSalary
            <<endl;

    return 0;
}
