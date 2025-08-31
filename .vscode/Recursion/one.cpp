#include<iostream>
using namespace std;

void fun(int i,int n){
    if(i< 1){
        return;
    }
    
    cout<<i<<endl;
    fun(i-1, n);
}

//  by backtrack printing from 1 to N
void backFun(int i, int n){
    if(i<1){
        return;
    }

    backFun(i-1, n);
    cout<<i<<endl;
}

//  by backtrack printing from N to 1;
void backRev(int i, int n){
    if (i>n){
        return;
    }

    backRev(i+1, n);
    cout<<i<<endl;
    
}

//   factorail of a number using parameterised way
void fact(int i, int facto){
    if (i<1){
        cout<<facto;
        return;
    }

    fact(i-1, facto*i);
    
}

int main(){
    int n;
    
    cout<<"Enter the no : ";
    cin>>n;
    // fun(n, n);
    // backFun(n, n);
    // backRev (1, n);
    fact(n, 1);
}
