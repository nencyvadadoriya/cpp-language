//Q.4 Write a Program to find Simple interest.
#include<iostream>
using namespace std;
main(){
	float  p , r , n , interest ;
	cout << "Enter  principal amount: ";
    cin >> p;

    cout << "Enter Rate of interest: ";
    cin >> r;

    cout << "Enter Time in month  : ";
    cin >> n;
    
    interest = (p * r * n ) / 100 ; 
    
    cout << "Simple Interest = " << interest << endl;
}
