#include<iostream>
using namespace std;
int upPy(int a){
    for(int i=0;i<a;i++){
        for(int j=0; j<a-i-1 ;j++){
            cout<<" ";
        }
        for(int j=0; j<i+1 ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int a=5;
    upPy(a);
}