/******************************************************************************
Escape Sequences in C++
	\n: New line
	\t: Tab
	\\: Backslash
	\': Single quote
	\": Double quote
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout << "Escape Sequences in C++" << endl;
    cout << "\nHello World\n";
    cout << "This is the second line.\n";
    cout << "This is the third line.\n";
    cout << "\nItem\tPrice\n";
    cout << "Apple\t1.00\n";
    cout << "Banana\t0.50\n";
    cout << "Orange\t0.70\n";
    cout << "\nThis is a backslash: \\\n";
    //It's a beautiful day!
    cout << "\nIt\'s a beautiful day!\n";
    //He said "Hello World"
    cout << "\nHe said, \"Hello World!\" \n";
    
    
    
    return 0;
}


/*
Escape Sequences in C++

Hello World
This is the second line.
This is the third line.

Item    Price
Apple   1.00
Banana  0.50
Orange  0.70

This is a backslash: \

It's a beautiful day!

He said, "Hello World!" 


...Program finished with exit code 0
Press ENTER to exit console.

  */
