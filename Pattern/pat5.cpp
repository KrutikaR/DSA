#include<iostream>
using namespace std;
int inPy(int a){
    for(int i=0; i<a; i++){
        for(int j=5; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a=5;
    inPy(a);

}