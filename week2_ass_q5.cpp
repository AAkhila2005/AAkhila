#include<iostream>
using namespace std;
int main(){
    int a[5]={1,4,5,6,7};
    int b[5],i;
    for(i=0;i<5;i++){
        b[i]=a[i];
    }
    cout<<"1st array-\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
    cout<<"2nd array-\n";
    for(i=4;i>=0;i--){
        cout<<b[i];
    }
}