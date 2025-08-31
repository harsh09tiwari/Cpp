#include<iostream>
#include<string>
using namespace std;


bool palindrone(string &s,int low,int high){

    if (low>=high){
        return true;
    }
    
    if (s[low] != s[high]){
        return false;
    }

    return palindrone(s, low+1, high-1);
    
}

//   another method
bool palindrone(int i, string &s){
    if (i > s.size()/2){
        return true;
    }

    if (s[i] != s[s.size() -1 -i]){
        return false;
    }
    
    return palindrone(i+1, s);
}


int main(){
    int n;
    cout<<"enter the size of string: "<<endl;
    cin>>n;
    
    string s(n, ' ');
    cout<<"enter the elements of string: ";

    for (int i = 0; i < n; i++){
        cin>>s[i];
    }

    // cout<<palindrone(s, 0, n-1);
    cout<<palindrone(0, s);
}