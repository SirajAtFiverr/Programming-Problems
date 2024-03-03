#include<bits/stdc++.h>
using namespace std;

/* Problem statement

There are N≤5000 workers. Each worker is available
during some days of this month (which has 30
days). For each worker, you are given a set of
numbers in sorted order, each from interval [1,30],
representing his/her availability. You need to assign
an important project to two workers but they will be
able to work on the project only when they are both
available. Find two workers that are best for the job
— maximize the number of days when both these
workers are available.

*/

int setBit(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
}

int main(){
    int n, k, day, i, j;
    cin>>n; // no. of workers
    vector<int> workers(n, 0);

    // Input
    for (i = 0; i < n; i++){
        cin>>k; // no. of days
        while(k--){
            cin>>day;
            // setting the dayth bit of ith worker
            workers[i] = setBit(workers[i], day);
        }
    }
    
        
    int bestPair[2] = {1, 2}; // Best Pairs
    int prevBest = 0, cur;
    // Iterating over n-workers
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            // couting no. of bits after performing bitwise 'and'
            // operation on ith and jth worker
            cur = __builtin_popcountll(workers[i] & workers[j]);
            // checking if '1's are graeter than previuos 
            // operation '1's
            if(cur > prevBest){
                prevBest = cur; // set greater count of '1's
                // changing best workers
                bestPair[0] = i+1;
                bestPair[1] = j+1;
            }
        }
    }
    // printing out results
    cout<<bestPair[0]<<" "<<bestPair[1]<<endl;
}