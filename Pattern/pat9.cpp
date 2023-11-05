#include<iostream>
using namespace std;
int uprTri(int a){
    for(int i=0;i<a;i++){
        for(int j=a; j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<a;i++){
        for(int j=0; j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    int a=5;
    uprTri(a);
}