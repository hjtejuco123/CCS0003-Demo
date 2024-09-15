/******************************************************************************
using string library and getline function
*******************************************************************************/
#include <iostream>
#include <string.h>  //#include<string>
using namespace std;
int main()
{
    string mystr;
    cout << "What\'s your name? ";
    //cin >> mystr;
    getline (cin,mystr);
    cout << "Hello "<< mystr << "\n";
    cout << "What is your favorite team? ";
    //cin >> mystr;
    getline (cin,mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}
