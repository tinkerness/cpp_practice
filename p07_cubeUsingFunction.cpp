//program to accept a number and print its cube using function
#include <iostream>
using namespace std;

float cube(float n)
{
    return n*n*n;
}

int main()
{
    int num;
    
    cout<<"enter the number : ";
    cin>>num;
    
    cout<<"The cube of "<<num<<" is "<<cube(num)<<"\n";
    
    return 0;
}


/*
Output:-

enter the number : 3
The cube of 3 is 27
*/
