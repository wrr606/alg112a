#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long int ll;

int main(){
    ll dp[51]={};
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=50;i++)
        dp[i]=dp[i-1]+dp[i-2];
    int n;
    while(cin>>n)
        cout<<dp[n]<<endl;
}