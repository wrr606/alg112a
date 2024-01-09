# 艾茲赫爾·戴克斯特拉   Edsger Wybe Dijkstra

## 生平
艾茲赫爾·韋伯·戴克斯特拉出生於鹿特丹，大學就讀於萊頓大學，研究理論物理學。[10][11]但他很快就發現自己的興趣是電腦科學。1980年代，擔任埃因霍溫理工大學教授。

他因對發展結構化程式語言做出的基礎貢獻而於1972年獲得圖靈獎。

## 知名貢獻
- 戴克斯特拉演算法(Dijkstra's algorithm)
- 結構化編程
- THE 作業系統
- 號誌（semaphore）

## Dijkstra's algorithm(單源最短路徑演算法)
`N` 代表節點由 1~N
`routs[a]={b,c}` 代表由 a 到 c 點的距離為 b
`dis` 代表由節點 1 到其他點的距離

```
#include<bits/stdc++.h>
using namespace std;

struct node{
    int distance;
    int destination;

    bool operator<(const node &other)const{
        return distance<other.distance;
    }
};

vector<node> routs[N];
int distance[N]={};

void Dijkstra(){
    priority_queue<node> pq;
    pq.push({0,1});
    while(!pq.empty()){
        node cur=pq.top();
        pq.pop();
        if(cur.distance>distance[cur.destination])
            continue;
        for(const auto &i:routs[cur.destination]){
            if(distance[i.destination]>i.distance+cur.distance){
                distance[i.destination]=i.distance+cur.distance;
                pq.push({distance[i.destination],i.destination});
            }
        }
    }
}
```
使用 Heap 結構來實現優先隊列
邊數 $E$，節點數 $V$
時間複雜度：$O((E+V)\log V)$