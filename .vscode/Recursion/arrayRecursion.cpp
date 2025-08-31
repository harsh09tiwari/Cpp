#include<iostream>
#include<vector>
using namespace std;


void reverse(vector<int> &arr, int low, int high){
    if (low>= high){
        return;
    }

    reverse(arr,low+1, high-1);
    swap(arr[low],arr[high]);
    
}

int main(){
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the element of array :";
    
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr, 0, n-1);

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}