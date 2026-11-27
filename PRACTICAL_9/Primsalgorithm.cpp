/* To implement Prim's algorithm to find a Minimum Spanning Tree (MST) of a connected weighted
undirected graph and analyze its complexity */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
const int V = 5;
int g[V][V] = {
{0,2,0,6,0},
{2,0,3,8,5},
{0,3,0,0,7},
{6,8,0,0,9},
{0,5,7,9,0}
};
vector<int> key(V, INT_MAX), parent(V, -1);
vector<bool> used(V, false);
key[0] = 0;
for (int count = 0; count < V - 1; count++) {
int u = -1;
for (int v = 0; v < V; v++)
if (!used[v] && (u == -1 || key[v] < key[u])) u = v;
used[u] = true;
for (int v = 0; v < V; v++)
if (g[u][v] && !used[v] && g[u][v] < key[v]) {
parent[v] = u;
key[v] = g[u][v];
}
}
int cost = 0;
for (int v = 1; v < V; v++) {
cout << parent[v] << " - " << v << " : " << g[v][parent[v]] << endl;
cost += g[v][parent[v]];
}
cout << "MST cost = " << cost;
}