#include<iostream>
using namespace std;
int pyr(int a){
    for(int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
 int a=5;
 pyr(5);
}