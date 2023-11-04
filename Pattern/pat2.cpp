#include<iostream>
using namespace std;
int rec(int a, int b){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int a=3;
    int b=5;
    rec(a,b);
}