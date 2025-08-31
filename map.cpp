#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // precompute

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    //  iterate in map

    
    for(auto i: mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }


    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;

        // fetch

        cout<<mpp[number]<<endl;
    }
    
    return 0;
    
}