#include<iostream>
using namespace std;
int main(){
    int n=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            n++;
            cout<<n<<" ";
        }
        cout<<endl;
    }
}