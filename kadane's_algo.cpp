#include<iostream>
using namespace std;

int main(){
    int arr[5]={0,1,2,3,4};
    int n= 5;

    for(int start=0; start<n; start++){
        for (int end=start; end<n; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i]
            }
        }
    }
}