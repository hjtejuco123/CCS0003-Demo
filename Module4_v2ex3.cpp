/******************************************************************************

cin with string 
ask for the users firstname and lastname (prompt)
input 
display 
*******************************************************************************/
#include <string>
#include <iostream>
using namespace std;
int main()
{
    //string firstname, fullname;
    string text;
    
    // cout << "Enter your first name: ";   
    // cin >> firstname; //input the firstname up to the space.  hadji\0
    
    // cin.ignore(); 
    // cout << "Enter your fullname: ";
    // getline(cin, fullname); //read the entire line including spaces 
    
    // cout << "First Name: "<< firstname<<endl;
    // cout << "Full name: "<< fullname << endl;
    
    cout << "Enter text " ;
    getline(cin, text);
    cout << "Value of text is " << text<<endl;
    

    return 0;
}
