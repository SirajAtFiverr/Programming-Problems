#include<bits/stdc++.h>
using namespace std;

#define F for(i=0; i<n; i++)

int main(){

    int n, i, j;
    cin>>n;
    vector<int> heights(n);
    F cin>>heights[i];

    int heightDiff;
    int minHeightDiff = abs(heights[0] - heights[1]);
    int s1 = 1, s2 = 2;
    i = 1;
    while(i<n){
        if(i+1 == n)
            j = 0;
        else
            j = i+1;

        heightDiff = abs(heights[i] - heights[j]);

        if(heightDiff < minHeightDiff){
            minHeightDiff = heightDiff;
            s1 = i+1;
            s2 = j+1;
        }
        i++;
    }

    cout<<s1<< "  " << s2<<endl;

    return 0;
}