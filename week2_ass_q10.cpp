#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    int i,alp=0,dig=0,spcc=0;
    cout<<"enter a string-\n";
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'|| s[i]>='A'&& s[i]<='Z')
        alp++;
        else if(s[i]>='0' && s[i]<='9')
            dig++;
        else
        spcc++;
    }
    cout<<"the number of alphabets are-\n"<<alp;
    cout<<endl;
    cout<<"the number of digits are-\n"<<dig;
    cout<<endl;
    cout<<"the number of special characters are-\n"<<spcc;
}
