/******************************************************************************

Use cin with Array

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int numbers[SIZE]; // array 
    
    /*
        size 5-1 (4)
        
        numbers[4]
        numbers[3]
        numbers[2]
        numbers[1]
        numbers[0] - index 
    */
    //prompt the user to input 5 numbers 
    cout << "Enter 5 numbers: ";
    // cin >> numbers[0];
    // cin >> numbers[1];
    // cin >> numbers[2];
    // cin >> numbers[3];
    // cin >> numbers[4];
    //.    1        2=t   4
    for (int i=0; i<SIZE; i++) {
        cin >> numbers[i];  //3 
    }
    
    cout << "You entered ";
    for (int i=0; i<SIZE; i++) {
        cout << numbers[i] << " ";
    }
    // cout << "Number value 1 "<<numbers[0]<< endl;
    // cout << "Number value 2 "<<numbers[1]<< endl;
    // cout << "Number value 3 "<<numbers[2]<< endl;
    // cout << "Number value 4 "<<numbers[3]<< endl;
    // cout << "Number value 5 "<<numbers[4]<< endl;


    return 0;
}
