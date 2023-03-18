//program that accepts radius of circle and prints its area

#include <iostream>
using namespace std;

int main()
{
    float r,area;
    
    cout<<"enter the radius of circle : ";
    cin>>r;
    
    area = 3.14 * r * r;
    
    cout<<"The area of the circle is "<<area;
    
    return 0;
}


/*
Output:-

enter the radius of circle : 3
The area of the circle is 28.26
*/
