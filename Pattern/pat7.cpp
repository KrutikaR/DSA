#include<iostream>
using namespace std;
int inNumPy(int a){
    for(int i=0; i<=a; i++){
        for(int j=a; j>i; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int a=5;
    inNumPy(a);
}