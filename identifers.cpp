#include <bits/stdc++.h>
using namespace std;


vector<string> keywords = {"int", "float", "double", "long", "break", "while", "do", "for", "if",
                           "elseif", "continue", "const", "char", "signed", "unsigned", "return", "void",
                           "sizeof", "goto", "typeof", "short", "switch", "auto", "default", "bool",
                           "struct", "enum", "union", "static", "extern", "volatile", "else"};

vector<string> operators = {"+", "-", "*", "/", "%", "=", "==", "!=", ">", "<", ">=",
                            "<=", "&&", "||", "!", "&", "|", "^"};


bool isIdentifier(string str) {
    if (!((str[0] >= 'a' && str[0] <= 'z') || 
          (str[0] >= 'A' && str[0] <= 'Z') || 
          str[0] == '_')) {
        return false;
    }

    for (int i = 0; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= '0' && str[i] <= '9') || 
              str[i] == '_')) {
            return false;
        }
    }
    return true;
}


bool isOperator(const string& str) {
    return find(operators.begin(), operators.end(), str) != operators.end();
}


bool isKeyword(const string& str) {
    return find(keywords.begin(), keywords.end(), str) != keywords.end();
}


void Vowels(char c){ 

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') { 
        cout<<c<<" is a Vowel"; 
        }
    else { 
            cout<<c<<" is a Consonant"; 
        } 
} 


int main() {
    string input;

    
    cout << "Enter a string to identify: ";
    cin >> input;
    
    if(input.length()==1){
        char c = input[0];
        Vowels(c);
    }

    else{
    
        if (isKeyword(input)) {
            cout << input << " is a keyword." << endl;
        } else if (isOperator(input)) {
            cout << input << " is an operator." << endl;
        } else if (isIdentifier(input)) {
            cout << input << " is an identifier." << endl;
        } else {
           cout << input << " is neither a keyword, operator, nor a valid identifier." << endl;
        }
    }    

    return 0;
}
