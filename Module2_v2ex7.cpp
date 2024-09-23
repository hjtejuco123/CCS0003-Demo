
/******************************************************************************
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int age = 25;
    double salary = 5000.4567;
    char grade = 'A';
    string name = "Hadji Tejuco";
    
    cout << "Formatted Output "<< endl;
    cout << setw(10) << "Name "<<setw(15)<<" Age "<<setw(15)<<"Salary"<<setw(10)<<" Grade" <<endl;
    cout << "==========================================================================="<<endl;
    
    cout << fixed << setprecision(2);
    
    //display
    cout    << setw(15) <<name 
            << setw(10) <<age
            << setw(15) <<salary
            << setw(10) <<grade
            <<endl;

    return 0;
}
