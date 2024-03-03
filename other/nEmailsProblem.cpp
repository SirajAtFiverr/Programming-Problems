#include<bits/stdc++.h>
using namespace std;


/* Problem statement

Suppose that Aamer either receives one e-mail or two e-
mails daily. The e-mail delivery to Aamer stops as soon
as he receives “n” e-mails, where n is a natural number.
When Aamer has already received “n-1” e-mails, he can
receive only 1 more e-mail and the e-mail delivery to him
will be stopped. You are required to compute the total
number of ways (unique sequences) of e-mail-delivery to
Aamer in not more than linear time. For example, if n=3,
the sequences can be 1,1,1 or 1,2 or 2,1. So, the total
number of ways (sequences) for this example is three.
Note that this is just an example; your solution should
work for all values of n.

**Just like finbonacii series algorithm**

*/

unsigned long long nWays(int n){
    // if there is only one email or no email  
    if(n <= 1)
        return 1;

    // creating and initailizing memomization vector
    vector<unsigned long long> mem(n+1);
    mem[0] = mem[1] = 1;

    // generating fibo series till n
    for(int i = 2; i<=n; i++)
        mem[i] = mem[i-1] + mem[i-2];

    // returning nth fibo number
    return mem[n];
}

int main(){
    int n;
    cin>>n;
    cout<<nWays(n);
}