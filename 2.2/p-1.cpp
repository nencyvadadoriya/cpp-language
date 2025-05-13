//Q.1 Write a Program to find the area of a circle.
#include<iostream>
#define PI 3.14
using namespace std;
main(){	
	float r , circle ; 
	cout << "Enter the area of circle: ";
    cin >> r;
	
	circle = PI * r * r;
	cout << "Area of the circle is: " << circle << endl;
}
