#include<iostream>
// #include<string>
using namespace std;

char toLower(char ch){
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
    
}


bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (tolower(a[s]) != tolower(a[e]))
        {
            return false;
        }
        else{
            if(!((a[s]>='a'&& a[s]<='z') || (a[s] >=0 && a[s] <=9))){
                s++;
            }
            else if (!((a[e]>='a' && a[e]<='z') || (a[e] >=0 && a[e] <=9))){
                e--;
            }
            s++;
            e--;
        }
        
    }
    return true;
}



void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    
}

char maxOccur(string s){
    int arr[26] = {0};

    for (int  i = 0; i < s.length(); i++)
    {
        int num = 0;
        if(s[i]>='a' && s[i]<='z'){
            num = s[i] - 'a';
        }
        else
        {
            num = s[i] - 'A';
        }
        arr[num]++;
    }
    int maxi = -1;
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi< arr[i])
        {
            count = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' +count;
    return finalAns;
}


int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main (){

    // char name[20];

    // cout << "enter your name"<< endl;
    // cin >> name;

    // // name[2] = '\0';

    // cout<< name<< endl;

    // int len = getlength(name);
    // cout<<"length : "<< len<<endl;
    // reverse(name, len);
    // cout<< "reverse :"<< name<< endl;
    // cout<<"palindrome or not: "<<checkPalindrome(name, len);


    string s;
    cin >> s;
    cout<<" max freq :"<< maxOccur(s);    
    return 0;
}