#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N=50;

int main(){
    ll dp[N]={};
    dp[0]=0,dp[1]=1;
    for(int i=2;i<N;i++)
        dp[i]=dp[i-1]+dp[i-2];
    int n;
    while(cin>>n)
        cout<<dp[n]<<endl;
}