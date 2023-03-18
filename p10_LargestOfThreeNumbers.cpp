//program to input 3 integers and find largest of them

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,large;
    
    cout<<"enter the three numbers : ";
    cin>>a>>b>>c;
    
    large = a>b ? (a>c ? a:c) : (b > c ? b:c);
    
    cout<<"The largest number is "<<large;
    
    return 0;
}


/*
Output:-

enter the three numbers : 4 3 9
The largest number is 9
*/
