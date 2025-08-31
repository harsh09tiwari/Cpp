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
    