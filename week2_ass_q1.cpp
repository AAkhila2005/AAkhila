#include<iostream>
using namespace std;
int countnumber(int arr[],int number,int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==number){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[6]={1,2,4,7,1,7};
    int n;
    cout<<"Enter the number -\n";
    cin>>n;
    cout<<"the repetation of the number is-"<<countnumber(arr,n,6);
    
    return 0;

}