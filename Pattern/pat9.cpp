#include<iostream>
using namespace std;
int uprTri(int a){
    for(int i=0;i<a;i++){
        for(int j=0; j<(a-i-1);j++){
                cout<<" ";
        }
        for(int j=0; j<(2*i+1);j++){
            cout<<"*";
        }
      cout<<endl; 
    }

    
}

int main(){
    int a=5;
    uprTri(a);
}