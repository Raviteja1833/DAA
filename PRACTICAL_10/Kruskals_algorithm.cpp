/*To implement Kruskal's algorithm using Disjoint Set Union (DSU) and analyze the cost of sorting and
cycle detection.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Edge { int u, v, w; };
struct DSU {
vector<int> p, rankv;
DSU(int n): p(n), rankv(n,0) { for(int i=0;i<n;i++) p[i]=i; }
int find(int x) { return p[x]==x ? x : p[x]=find(p[x]); }
bool unite(int a,int b) {
a=find(a); b=find(b);
if(a==b) return false;
if(rankv[a]<rankv[b]) swap(a,b);
p[b]=a;
if(rankv[a]==rankv[b]) rankv[a]++;
return true;
}
};
int main() {
int V = 4;
vector<Edge> edges = {
{0,1,10},{0,2,6},{0,3,5},{1,3,15},{2,3,4}
};
sort(edges.begin(), edges.end(),
[](Edge a, Edge b){ return a.w < b.w; });
DSU dsu(V);
int cost = 0;
for (auto e : edges) {
if (dsu.unite(e.u, e.v)) {
cout << e.u << " - " << e.v << " : " << e.w << endl;
cost += e.w;
}
}
cout << "MST cost = " << cost;
}