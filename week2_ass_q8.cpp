#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    int count=0;
    int ccount=0;
    int i;
    cout<<"enter a string-\n";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        count++;
        else
        ccount++;
    }
    cout<<"the number of vowels are-\n"<<count;
    cout<<endl;
    cout<<"the number of consonants are-\n"<<ccount;
}