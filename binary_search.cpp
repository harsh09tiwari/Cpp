#include<iostream>
using namespace std;

int binary_search(int arr[],int  low,int  high,int  target){
    if(low > high)
        return -1;
    
    int mid = (low + high)/2;

    if(arr[mid]== target)
        return mid;

    else if(target < arr[mid])
        return binary_search(arr, low, mid-1, target);
    
    else
        return binary_search(arr, mid+1, high, target);
}


int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the array elements in  ascending order"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter the target"<<endl;

    cin>>target;

    int low = 0;
    int high = n-1;


    int result= binary_search(arr, low, high,target);

    
    cout<<result<<endl;

}