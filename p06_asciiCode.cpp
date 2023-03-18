//program to display ascii code of a character
#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    cout<<"enter a character : ";
    cin>>ch;
    
    int  num = ch;
    cout<<"The ascii code for "<<ch<<" is "<<num<<"\n";
    
    return 0;
}


/*
Output:-

enter a character : B
The ascii code for B is 66
*/
