#include<iostream>
using namespace std;
int main()
{
    int i,j,k,sum,diff,mult,div;
    cout<<"enter a number-\n";
    cin>>i;
    cout<<"enter another number-\n";
    cin>>j;
    cout<<"enter the case-\n";
    cin>>k;
    switch(k)
    {
        case 1:
        sum=i+j;
        cout<<sum;
        break;
        case 2:
        diff=i-j;
        cout<<diff;
        break;
        case 3:
        mult=i*j;
        cout<<mult;
        break;
        case 4:
        div=i/j;
        cout<<div;
        break;
    }
}