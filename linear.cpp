#include<iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

void arrReverse(int arr[], int sz){
    int start = 0,  end = sz -1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]= {0,1,2,3,4,5,6};
    int sz=7;


    arrReverse(arr, sz);

    for (int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}