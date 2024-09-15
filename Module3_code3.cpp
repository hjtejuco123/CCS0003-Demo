/******************************************************************************
module3_code3.cpp
Operators in C++

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout << "Operators in C++"<<endl;
    int a=5, b=2;
    
    //Arithmetic Operators: +, -, *, /, %
    int sum  = a+b; //addition
    int diff = a-b; // subtraction
    int prod = a*b; // multiplication
    int quotient = a/b; // division
    int remain = a%b; //modules 
    
    //Relational Operators: ==, !=, <, >, <=, >=
    //result of the evaluation true or false 
    //true = 1, false = 0
    
    bool isEqual = (a==b); //relational Operators
    bool isGreater = (a>b); //relational operators 
    
	//Logical Operators:            &&, ||, !
	//truth table 
	/*
	    expr1       expr2           &&          ||           !
	                               FAND        TOR          NOT 
	    t           t               t           t       t   f
	    t           f               f           t       f   t
	    f           t               f           t
	    f           f               f           f 
	
	*/
	//a=5, b=2;
	bool logicalAnd = (a>1 && b<3);
	
	//Increment/Decrement Operators:++, --
	//a++;  //Increment operator  5 - 6 
	//b--;  //decrement operator  2 - 1 
	
	
	cout << "Sum: " << sum<<endl;
	cout << "Difference: " << diff << endl;
	cout << "Product: " << prod << endl;
	cout << "Quotient: " << quotient <<endl;
	cout << "Remainder:  "<< remain << endl;
	
	cout << "Is Equal " << (isEqual ? "True":"False")<<endl;
	cout << "Is Greater " << (isGreater ? "True":"False")<<endl;
	cout << "Logical AND " << (logicalAnd ? "True" :"False")<<endl;
	
	cout << "a++ " << (a++) << endl; 
	cout << "b-- " << (b--) << endl;
	//condition 
	int max = (a>b) ? a : b;
	
	
	cout << "Max " << max << endl;
	
	return 0;
}
