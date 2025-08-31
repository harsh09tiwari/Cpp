#include<iostream> 
using namespace std; 

void Vowels(char c){ 

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') { 
        cout<<c<<" is a Vowel"; 
        }
    else { 
            cout<<c<<" is a Consonant"; 
        } 
} 

int main(){

    char c; 
    cout<<"Enter a character: "; 
    cin>>c; 
    Vowels(c); 
    return 0; 
}