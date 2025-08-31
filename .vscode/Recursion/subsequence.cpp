#include<iostream>
#include<vector>
using namespace std;

void subseq(vector<int> &arr , int i, vector<int> &arr1){

    if (i>= arr.size()){
        for (int i = 0; i < arr1.size(); i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        return;
    }

    arr1.push_back(arr[i]);
    subseq(arr, i+1, arr1);

    arr1.pop_back();
    subseq(arr, i+1, arr1);

}

int main(){
    vector<int> arr = {3,1,2};
    vector<int> arr1; 
    subseq(arr, 0, arr1);
    return 0;
}