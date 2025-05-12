// Q.1 Write a Program to perform all arithmetic operators such as +, -, *, / and %

#include<iostream>
using namespace std;
main (){

    int a = 10 , b=20 ;
    cout << "Addition  of " << a << " and " << b   << " is " << a+b << endl;
    cout << "Subtraction  of " << a << " and " << b   << " is " << a-b << endl;
    cout << "Multiplication  of " << a << " and " << b   << " is " << a*b << endl;
    cout << "Division  of " << a << " and " << b   << " is " << a/b << endl;
    cout << "Modulo   of " << a << " and " << b   << " is " << a%b << endl;


    cout<< a << " + " << b << " = " << a+b  <<endl; 
    cout<< a << " - " << b << " = " << a-b  <<endl; 
    cout<< a << " * " << b << " = " << a*b  <<endl; 
    cout<< a << " / " << b << " = " << a/b  <<endl; 
    cout<< a << " % " << b << " = " << a%b  <<endl; 
}