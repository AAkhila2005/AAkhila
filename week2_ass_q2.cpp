#include<iostream>
using namespace std;
int main()
{
  int arr1[20],arr2[20],merge[50],rev[50];
    int n1,n2,k,i;
    cout<<"enter size of 1st array-\n";
    cin>>n1;
    cout<<"enter elements of 1st array-\n";
    for(i=0;i<n1;i++){
      cin>>arr1[i];
      merge[i]=arr1[i];
    }
    k=i;
    cout<<"enter size of 2nd array-\n";
    cin>>n2;
    cout<<"enter elements of 2nd array-\n";
    for(i=0;i<n2;i++){
      cin>>arr2[i];
      merge[k]=arr2[i];
      k++;
    }
    cout<<"\nmerged array-\n";
    for(i=0;i<k;i++)
    cout<<merge[i]<<" ";

    cout<<"\n";
    cout<<"reverse of the array is-\n";
    for(int i=k-1;i>=0;i--)
    cout<<merge[i]<<" ";
  return 0;

}
