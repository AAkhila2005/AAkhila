#include<iostream>
using namespace std;
int main()
{
    float i,j,k;
    cout<<"enter the  three sides of triangle-\n";
    cin>>i>>j>>k;
    if(i==j&&j==k&&k==i)
    cout<<"triangle is equilateral";
     else if(i==j || j==k || k==i)
     cout<<"triangle is isoscelen";
     else
     cout<<"triangle is scalen";
}