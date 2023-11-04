#include<iostream>
using namespace std;
int invHoPy(int a){
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(i==0||j==0|| j==(a-i-1))
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            //cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a=6;
    invHoPy(a);
}