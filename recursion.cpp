#include<iostream>
using namespace std;

void print(int n, int i){
    if(i>n){
        return;
    }
    print(n,i+1);
    cout<<i<<" ";
}

int main(){
    //int n=5;
    print(5,1);

}