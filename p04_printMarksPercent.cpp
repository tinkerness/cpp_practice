//program that inputs students marks out of 300 and prints the percentage marks

#include <iostream>
using namespace std;

int main()
{
    int marks,percent;
    
    cout<<"enter the marks obtained out of 300 : ";
    cin>>marks;
    
    percent = (marks * 100) / 300;
    
    cout<<"The percentage marks obtained is "
    <<percent<<" %\n";
    
    return 0;
}


/*
Output:-

enter the marks obtained out of 300 : 270
The percentage marks obtained is 90 %
*/
