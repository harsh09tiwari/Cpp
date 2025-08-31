#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;
    // int arr[n];

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // //  precompute

    // int hash[13]= {0};
    // for (int i=0; i<n; i++)
    // {
    //     hash[arr[i]]+= 1;
    // }
    
    
    // int q;
    // cin>>q;

    // while (q--)
    // {
    //     int number ;
    //     cin>>number;

    //     // fetch

    //     cout<<hash[number]<<endl;
    // }



//   for lowercase 
// for all other remove -'a' and size is 256


    string s;
    cin>>s;

    //  precompute
    int hash[26]={0};
    for (int  i = 0; i < s.size(); i++)
    {
        hash[s[i]- 'a']++;
    }
    
    int q;
    cin>>q;
    while (q--){
        char c;
        cin>>c;

        // fetch

        cout<<hash[c-'a']<<endl;

    }
    

    return 0;
}