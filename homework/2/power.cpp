#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long int ll;

ll qpow(ll a,ll n){//a^n 快速冪
    ll res=1;
    while(n){
        if(n&1)
            res*=a;
        n>>=1;
        a*=a;
    }
    return res;
}

ll method_1(ll n){//直接算
    return qpow(2,n);
}

ll method_2(ll n){//遞迴1
    if(n==0)
        return 1;
    return method_2(n-1)+method_2(n-1);
}

ll method_3(ll n){//遞迴2
    if(n==0)
        return 1;
    return 2*method_3(n-1);
}

ll method_4(ll n,ll table[]){//遞迴+查表
    if(n==0)
        return 1;
    if(table[n]!=0)
        return table[n];
    ll temp=method_2(n-1)+method_2(n-1);
    table[n]=temp;
    return temp;
}

int main(){
    ll n,table[64]={1};
    while(cin>>n){
        cout<<method_1(n)<<endl;
        cout<<method_2(n)<<endl;
        cout<<method_3(n)<<endl;
        cout<<method_4(n,table)<<endl;
    }
}