#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long int ll;

int main(){
    ll f[51]={};
    f[0]=0,f[1]=1;
    for(int i=2;i<=50;i++)
        f[i]=f[i-1]+f[i-2];
    int n;
    while(cin>>n)
        cout<<f[n]<<endl;
}