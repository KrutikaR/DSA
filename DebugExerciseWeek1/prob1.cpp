#include<iostream>
using namespace std;
int main(){
    char a='A';
    if(a>='A' || a<='Z')
        cout<<1;
    else if(a>='a' || a<='z')
        cout<<0;
    else
        cout<<-1;   
}