#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter a year-\n";
    cin>>i;
    if(i%400==0 || i%100!=0 && i%4==0)
    cout<<"leap year\n";
    else
    cout<<"Not a leap year\n";
}