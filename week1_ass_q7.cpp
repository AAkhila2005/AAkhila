#include<iostream>
using namespace std;
int main()
{
    float i,j,k,l,m,tot,avg,per;
    cout<<"enter the marks of all the subjects out of 100-\n";
    cin>>i>>j>>k>>l>>m;
    tot=(i+j+k+l+m);
    avg=tot/5;
    per=(tot/600)*100;
    cout<<"total marks-\n"<<tot;
    cout<<"\n";
    cout<<"average is-\n"<<avg;
    cout<<"\n";
    cout<<"percentage is-\n"<<per;
}