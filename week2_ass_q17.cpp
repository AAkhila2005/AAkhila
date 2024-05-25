#include<iostream>
using namespace std;
int main()
{
    int size,i,num,occr=0;
    cout<<"enter array size-\n";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements-\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter array integer to know-\n";
    cin>>num;
    for(i=0;i<size;i++){
        if(arr[i]==num){
            occr++;
        }
    }
    cout<<"occurance times-\n"<<occr;

}










