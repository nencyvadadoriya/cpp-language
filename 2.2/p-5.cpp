//Q.5 Write a Program to find the Perimeter of the circle.
#include<iostream>
using namespace std ; 
main(){
	float r , Perimeter ;
	const float PI = 3.14;
	 cout << "Enter the area of circle: ";
    cin >> r;
    
    Perimeter = 2 * PI * r;
    cout << "Perimeter of the circle = " << Perimeter << endl;
}
