#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    cin>>s1>>s2;


    int length = s1.length();
    int i = 0, j = length-1;
    bool correct = true;
    while(i<length){
        if(s1[i] != s2[j]){
            correct = false;
            break;
        }
        i++;
        j--;
    }

    if(correct)
        cout<<"YES";
    else
        cout<<"NO\n";

    return 0;
}