#include<iostream>
using namespace std;
int main()
{
    float i,j,k;
    cout<<"enter the  three angles of triangle-\n";
    cin>>i>>j>>k;
    if(i+j+k==180)
    cout<<"triangle is valid\n";
    else 
    cout<<"triangle is not valid\n";
}