//program to convert a given number of days into years, weeks and days

#include <iostream>
using namespace std;

int main()
{
    int total_days,years,rem_days,weeks,days;
    
    cout<<"enter the total number of days : ";
    cin>>total_days;
    
    years = total_days/365;
    rem_days = total_days - (years * 365);
    weeks = rem_days/7;
    days = rem_days - (weeks * 7);
    
    cout<<total_days<<" days is equal to "
        <<years<<" years, "
        <<weeks<<" weeks & "
        <<days<<" days.";
    
    return 0;
}


/*
Output:-

enter the total number of days : 1142
1142 days is equal to 3 years, 6 weeks & 5 days.
*/
