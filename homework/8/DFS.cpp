#include <bits/stdc++.h>
using namespace std;

void draw(const vector<string> &m){
    for(const auto &i:m){
        for(const auto &j:i)
            cout<<j;
        cout<<endl;
    }
    cout<<endl;
}

bool ed=0;

void DFS(vector<string> &m,pair<int,int> cur,const pair<int,int> &b){
    if(ed)
        return;
    //cout<<cur.first<<" "<<cur.second<<endl;
    if(cur.first<0||cur.first>=m.size()||cur.second<0||cur.second>=m[0].size())
        return;
    if(m[cur.first][cur.second]=='*'||m[cur.first][cur.second]=='.')
        return;
    m[cur.first][cur.second]='.';
    if(m[b.first][b.second]=='.'){
        ed=1;
        return;
    }
    draw(m);
    DFS(m,{cur.first+1,cur.second},b);
    DFS(m,{cur.first,cur.second+1},b);
    DFS(m,{cur.first-1,cur.second},b);
    DFS(m,{cur.first,cur.second-1},b);
}

int main(){
    vector<string> m;
    string s;
    while(getline(cin,s))
        m.push_back(s);
    pair<int,int> a={5,5},b;
    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[i].size();j++){
            if((i==0||i==m.size()-1||j==0||j==m[i].size()-1)&&m[i][j]==' '){
                if(a.first==5&&a.second==5)
                    a={i,j};
                else
                    b={i,j};
            }
        }
    }
    DFS(m,a,b);
}