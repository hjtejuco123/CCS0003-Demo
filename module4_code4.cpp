/******************************************************************************
char input 
using array 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    char mystr[20]; //array (mystr can hold 20 characters)    
                    //[20] shows the number of elements 
                    //allocated for mystr 
    cout << "What\'s your name? ";
    cin >> mystr;
    cout << "Hello "<< mystr << "\n";
    cout << "What is your favorite team? ";
    cin >> mystr;
    cout << "I like " << mystr << " too!\n";
    return 0;
}
