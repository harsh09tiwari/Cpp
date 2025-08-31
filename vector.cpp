#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>vec={1,2,3,4,5};

    cout<< "size = "<<vec.size() << endl;
    vec.push_back(25);
    vec.pop_back();


    // for (int val: vec){ //   for each loop
    //     cout<< val <<endl;
    // }

    cout<< vec.front()<<endl;
    cout<< vec.back()<<endl;
    cout<< vec.at(0)<<endl; 
    return 0;

}