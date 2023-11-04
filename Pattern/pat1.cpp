#include<iostream>
using namespace std;
int squ(int a){
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<"* ";
        }
    cout<<endl;
    }
}
int main(){
    int a = 4;
    squ(a);

}
