#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp; //二維陣列
string s1,s2;

int Find_Edit_Distance(int i=s1.size(),int j=s2.size()){
    //cout<<i<<" "<<j<<endl;
    if(i<=0||j<=0)
        return 0;
    if(dp[i][j]){//已經算過
        return dp[i][j];
    }
    if(s1[i-1]==s2[j-1])
        dp[i][j]=Find_Edit_Distance(i-1,j-1);
    else
        dp[i][j]=min({Find_Edit_Distance(i-1,j-1),Find_Edit_Distance(i,j-1),Find_Edit_Distance(i-1,j)})+1;
    return dp[i][j];
}

int main(){
    cout<<"string 1:\n";
    getline(cin,s1);
    cout<<"string 1:\n";
    getline(cin,s2);
    dp.assign(s1.size()+1,vector<int>(s2.size()+1));//設定二維陣列的長度
    cout<<"Edit_Distance:"<<Find_Edit_Distance();
}
/*
EX:
kitten
sitting

ATG A TCCG
ATGCAATCCC
*/