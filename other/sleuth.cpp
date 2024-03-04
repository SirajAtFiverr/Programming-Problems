#include<bits/stdc++.h>
using namespace std;

int lastAlphabetIndex(string s){
    int length = s.length();
    int  i = length-1;
    while(i--)
        if((s[i] >= 65 && s[i] <= 90) ||
           (s[i] >= 97 && s[i] <= 122))
            return i;

    return -1;
}

int main(){
    string s;
    getline(cin, s);

    switch(s[lastAlphabetIndex(s)]){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
            cout<<"YES\n";
            break;
        default:
            cout<<"NO\n";
    }
    return 0;
}