/******************************************************************************
Compute the area of a rectangle, 
Ask the user to input the length and width and 
print the area of the rectangle

formula area = length * width

IPO (input process output)

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    //declare the variables to compute the area of rectangle 
    double length, width, area;
    // //prompt 
    // cout << "Enter the length of the rectangle: ";
    // //input 
    // cin >> length;
    // //prompt
    // cout << "Enter the width of the rectangle: ";
    // //input
    // cin >> width;
    
    //prompt another approach in input/output
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    
    //process 
    area = length * width;
    //output 
    cout << "The area of the rectangle is " << area << endl;
    

    return 0;
}
