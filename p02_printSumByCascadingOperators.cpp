//program to print sum of two values by cascading i/o operators

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,sum;
    
    cout<<"enter two numbers : ";
    cin>>num1>>num2;    //cascading input operator
    
    cout<<"The sum of "
    <<num1<<" and "
    <<num2<<" is "
    <<num1 + num2 <<"\n";   //cascading output operator
    
    return 0;
}


/*
Output:-

enter two numbers : 3 4
The sum of 3 and 4 is 7
*/
