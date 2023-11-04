#include<iostream>
using namespace std;
int numPy(int a){
    for(int i=1; i<=a; i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int a=5;
    numPy(5);
}